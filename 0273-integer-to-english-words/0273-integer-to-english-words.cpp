class Solution {
public:
    string intToString(int n) {
        string ans="";
        string below20[]={"Zero ","One ","Two ","Three ","Four ","Five ","Six ","Seven ","Eight ","Nine ","Ten ","Eleven ","Twelve ","Thirteen ","Fourteen ","Fifteen ","Sixteen ","Seventeen ","Eighteen ","Nineteen "};
        string above20[]={"Twenty ","Thirty ","Forty ","Fifty " ,"Sixty ","Seventy ","Eighty ","Ninety ","Hundered ","Thousand ","Million ","Billion "};
        if(n>=1000000000) return intToString(n/1000000000)+"Billion "+intToString(n%1000000000);
        if(n>=1000000) return intToString(n/1000000)+"Million "+intToString(n%1000000);
        if(n>=1000) return intToString(n/1000)+"Thousand "+intToString(n%1000);
        if(n>=100) return intToString(n/100)+"Hundred "+intToString(n%100);
        if(n>=20) return ""+above20[n/10 - 2]+intToString(n%10);
        if(n>=1)  return ""+below20[n];
        return "";
    }
    string numberToWords(int n) {
        if(n==0) return "Zero";
        string result=intToString(n);
        result.pop_back();
        return result;
    }
};