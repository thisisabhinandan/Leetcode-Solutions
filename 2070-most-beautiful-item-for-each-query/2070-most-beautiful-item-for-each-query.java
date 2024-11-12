class Solution {
    public int[] maximumBeauty(int[][] items, int[] queries) {
        Arrays.sort(items,(a,b)->Integer.compare(a[0],b[0]));
        int n=queries.length;
        int [] ans=new int[n];
        for(int i=1;i<items.length;i++)
        {
            items[i][1]=Math.max(items[i][1],items[i-1][1]);
        }
        for(int i=0;i<queries.length;i++)
        {
            ans[i]=binarysearch(items,queries[i]);
        }
        return ans;
    }
    public int binarysearch(int [][]items, int maxi)
    {
        int l=0; int r=items.length-1;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2; 
            if(items[mid][0]>maxi)
            {
                r=mid-1;
            }
            else{
                ans=Math.max(ans,items[mid][1]);
                l=mid+1;
            }
        }
        return ans;
    }
}