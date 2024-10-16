class Solution {
    public String longestDiverseString(int a, int b, int c) {
        StringBuilder sb=new StringBuilder();
        int cnta=0; int cntb=0; int cntc=0; int n=a+b+c;
        while(a>0 || b>0 || c>0)
        {
            if((a>=b && a>=c && cnta<2) || (cntb==2 && a>0) || (cntc==2 && a>0))
            {
                sb.append('a');
                a--;
                cnta++;
                cntb=0;
                cntc=0;
            }
            else if((b>=a && b>=c && cntb<2) || (cnta==2 && b>0) || (cntc==2 && b>0))
            {
                sb.append('b');
                b--;
                cntb++;
                cnta=0;
                cntc=0;
            }
            else if((c>=a && c>=b && cntc<2)  || (cnta==2 && c>0) || (cntb==2 && c>0))
            {
                sb.append('c');
                c--;
                cntc++;
                cnta=0;
                cntb=0;
            }
            else{
                break;
            }
        }
        return sb.toString();
    }
}