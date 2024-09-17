class Solution {
    public boolean rotateString(String s, String goal) {
        String temp=s; 
        temp=temp+s; 
        if(s.length()!=goal.length())
        {
            return false; 
        }
        else if(!temp.contains(goal))
        {
            return false;
        }
        return true; 
    }
}