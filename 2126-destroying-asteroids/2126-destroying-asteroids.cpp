class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long mas=mass;
        long long n=asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<n;i++){
            if(mas<asteroids[i]){
                return false;
            }
            mas+=asteroids[i];
        }
        return true;
    }
};
