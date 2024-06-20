class Solution {
    public long smallestNumber(long num) {
         if(num<=9&&num>=-9) return num;
       ArrayList<Long> nums=new ArrayList<>(); long ans=0; boolean b=true;
        if(num<0) {num=num*-1; b=false;}
       
        while(num!=0)
            {
                long r=num%10; 
                nums.add(r); 
                num/=10; 
            }
            
        if(b) Collections.sort(nums);
        if(!b) Collections.sort(nums,Collections.reverseOrder()); 
        int k=0;
        if(nums.get(0)==0)
            {  
            for(int i=1;i<nums.size();i++)
            {
               if(nums.get(i)!=0)  {k=i; Collections.swap(nums, 0, k); break;}
            }
            
            }
         for(int i=0;i<nums.size();i++)
         {
             ans=ans*10+nums.get(i);
         }
        
        if(b) return ans;
        else return ans*-1;
    }
}