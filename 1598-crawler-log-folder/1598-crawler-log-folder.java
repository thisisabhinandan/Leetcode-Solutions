class Solution {
    public int minOperations(String[] logs) {
        int curr=0; 
        for(int i=0;i<logs.length;i++)
        {
            String s=logs[i]; 
            if(s.charAt(0)!='.'&&s.charAt(1)!='.') curr++;
            else if(s.charAt(0)=='.'&&s.charAt(1)=='.'&&curr!=0) curr--;
        }
        return curr;
    }
}