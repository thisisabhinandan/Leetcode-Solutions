class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 0; 
        long long high = 1e14; // Use a large number to cover all possible times
        
        while (low < high) {
            long long mid = low + (high - low) / 2;
            if (maxtrip(time, mid) < totalTrips) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low; 
    }

    long long maxtrip(vector<int>& time, long long mid) {
        long long sum = 0;
        for (int i=0;i<time.size();i++) {
            sum += mid / time[i]; // Calculate the number of trips that can be made
        }
        return sum;
    }
};
