class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>count(60,0);
        for(auto it:time)count[it%60]++;
        int ans=0;
        for(int i=1;i<30;i++){
            ans+=count[i]*count[60-i];
        }
        
        ans+=specialcase(count[0]-1)+specialcase(count[30]-1);
        return ans;
    }
    long long specialcase(long long n){
        long long x=n*(n+1);
        return x/2;
    }
};