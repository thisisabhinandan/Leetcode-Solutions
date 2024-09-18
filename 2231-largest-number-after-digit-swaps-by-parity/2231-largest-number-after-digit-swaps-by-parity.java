class Solution {
    public int largestInteger(int num) {
        String n=String.valueOf(num); 
        char[] ch=n.toCharArray(); 
        for(int i=0;i<ch.length;i++)
        {
            for(int j=i+1;j<ch.length;j++)
            {
                if((ch[i]-'0')%2==(ch[j]-'0')%2 && ch[j]-'0'>ch[i]-'0')
                {
                    swap(ch,i,j);
                }
            }
        }
        return Integer.parseInt(String.valueOf(ch));
    }
    public char [] swap(char [] ch, int i , int j)
    {
        char temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        return ch;
    }
}