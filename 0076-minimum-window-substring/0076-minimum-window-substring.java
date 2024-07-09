  class Solution {
                public String minWindow(String s, String t) {
                    int tmap[]=new int[128]; int cnt=t.length(); int j=0; int minstart=0; int minlen=Integer.MAX_VALUE;
                    for(int i=0;i<t.length();i++){
                        char ch=t.charAt(i);
                        tmap[ch]++;
                    }
                    for(int i=0;i<s.length();i++){
                        char ch=s.charAt(i);
                        if(tmap[ch]>0){
                            cnt--;
                        }
                        tmap[ch]--;
                        while(cnt==0)
                        {
                            if(minlen>i-j+1)
                            {
                                minstart=j;
                                minlen=i-j+1;
                            }
                            tmap[s.charAt(j)]++;
                            if(tmap[s.charAt(j)]>0) {cnt++;}
                            j++;
                        }
                    }
                    if(minlen==Integer.MAX_VALUE) return "";
                    else return s.substring(minstart,minstart+minlen);
                }
            }