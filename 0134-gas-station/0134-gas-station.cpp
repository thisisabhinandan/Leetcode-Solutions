class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0; 
        int surplus=0; 
        int total=0; 
        int n=gas.size(); 
        for(int i=0;i<n;i++)
        {   
            total+=gas[i]-cost[i];
            surplus+=gas[i]-cost[i];
            if(surplus<0)
            {   surplus=0;
                start=i+1;
            }  
        }
        if(total<0) return -1; 
        else return start;
    }
};


    