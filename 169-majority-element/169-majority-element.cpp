class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(); 
        int c=0; 
        int e=0; 
        for(int i=0;i<n;i++)
        {
            if(c==0) {e=nums[i];}
            
            if(e==nums[i]){c++;}
            
            else {c--;}
        }
        return e; //return the candidate and NOT THE NUMBER OF VOTES YOU DUMBFUCK
    }
};

/*

A A A C C B B C C C B C C
 
1- A (1)
2- A (2)
3- A (3)
4- A (2)
5- A (1)
6- B (1)
7- B (2)
8- B (1)
9- C (1)
10- C (2)
11- C (1)
12- C (2)
13- C (3)
 
 
 class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int candidate=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                candidate=nums[i];

            }
            if(candidate==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return candidate;
    }
};
*/
