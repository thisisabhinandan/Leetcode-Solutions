class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long ans=mass;
        for(int i=0;i<asteroids.size();i++)
        {
            if(ans>=asteroids[i]) ans+=asteroids[i];
            else return false;
        }
        return true;
    }
};