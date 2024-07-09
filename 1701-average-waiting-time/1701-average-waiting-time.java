class Solution {
    public double averageWaitingTime(int[][] customers) {
        int preptime=0; long waittime=0;
        for(int i=0;i<customers.length;i++)
        {
            preptime=Math.max(customers[i][0],preptime)+customers[i][1];
            waittime+=preptime-customers[i][0];
        }
        return (double)waittime/customers.length;
    }
}