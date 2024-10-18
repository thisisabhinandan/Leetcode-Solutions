class Solution {
    public int garbageCollection(String[] garbage, int[] travel) {
        int tot=0; int glast=0; int mlast=0; int plast=0;
        for(int i=0;i<garbage.length;i++)
        {
            String str=garbage[i];
            for(char ch:str.toCharArray())
            {
                if(ch=='M') 
                {
                    mlast=i;
                }
                else if(ch=='P') 
                {
                    plast=i;
                }
                else 
                {
                    glast=i;
                }
                tot++;
            }
        }
        for(int i=1;i<travel.length;i++)
        {
            travel[i]=travel[i-1]+travel[i];
        }
        if(glast!=0) tot+=travel[glast-1];
        if(plast!=0) tot+=travel[plast-1];
        if(mlast!=0) tot+=travel[mlast-1];
        return tot;
    }
}