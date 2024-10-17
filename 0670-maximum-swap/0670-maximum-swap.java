class Solution {
    public int maximumSwap(int num) { 
       char [] chars=Integer.toString(num).toCharArray(); 
        int maxidx=-1; Character maxi='0';
        int rightidx=-1; int leftidx=-1;
        for(int i=chars.length-1;i>=0;i--)
        {
            if(chars[i]>maxi)
            {
                maxi=chars[i];
                maxidx=i;
            }
            else if(chars[i]<maxi){
                leftidx=i; 
                rightidx=maxidx;
            }
        }
        if(leftidx==-1) return num; 
        char ch=chars[leftidx];
        chars[leftidx]=chars[rightidx];
        chars[rightidx]=ch; 
        return Integer.parseInt(new String(chars));
    }
}