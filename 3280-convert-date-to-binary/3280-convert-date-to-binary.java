class Solution {
    public String convertDateToBinary(String date) {
        String year=date.substring(0,4); 
        String month=date.substring(5,7);
        String day=date.substring(8,10);
        int iyear=Integer.parseInt(year);
        int imonth=Integer.parseInt(month);
        int iday=Integer.parseInt(day);
        String ans="";
        ans+=Integer.toBinaryString(iyear)+"-"+Integer.toBinaryString(imonth)+"-"+Integer.toBinaryString(iday); 
        return ans;
    }
}