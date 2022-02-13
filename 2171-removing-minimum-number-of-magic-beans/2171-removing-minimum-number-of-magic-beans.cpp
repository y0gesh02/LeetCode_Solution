class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long mini=1e18;
        sort(beans.begin(),beans.end());
        long long n=beans.size();
        long long sum=0;
        for(auto i:beans) sum+=i;
        for(long long i=0;i<n;i++){
            long long res= sum -(n-i)*beans[i];
            mini=min(mini,res);
        }
        return mini;
    }
};