class Solution {
    public int candy(int[] ratings) {
        int sum=0; 
        int n=ratings.length;
        int [] arr=new int [n];
        for(int i=0;i<n;i++)
        {
            arr[i]=1;
        }
        for(int i=1;i<ratings.length;i++)
        {
            if(ratings[i-1]<ratings[i])
            {
                arr[i]=1+arr[i-1];
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                arr[i]=Math.max(arr[i],arr[i+1]+1);
            }
        }
        for(int i=0;i<arr.length;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
}