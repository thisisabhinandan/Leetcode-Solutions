#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int totalTeams = 0;

        for (int i = 0; i < n; ++i) {
            int lessLeft = 0, greaterRight = 0;
            int lessRight = 0, greaterLeft = 0;

            for (int j = 0; j < i; ++j) {
                if (rating[j] < rating[i]) {
                    lessLeft++;
                } else if (rating[j] > rating[i]) {
                    greaterLeft++;
                }
            }
            for (int k = i + 1; k < n; ++k) {
                if (rating[k] > rating[i]) {
                    greaterRight++;
                } else if (rating[k] < rating[i]) {
                    lessRight++;
                }
            }

            totalTeams += lessLeft * greaterRight; // case 1: rating[i] is the middle element
            totalTeams += greaterLeft * lessRight; // case 2: rating[i] is the middle element
        }

        return totalTeams;
    }
};

