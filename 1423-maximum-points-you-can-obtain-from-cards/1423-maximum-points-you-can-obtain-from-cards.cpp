class Solution {
public:
    int maxScore(vector<int>& nu, int k) {
        int n=nu.size();
        int sum=0;
        for(int i=n-k;i<n;i++){
            sum+=nu[i];
        }
        int maxi=sum;
        for(int i=0;i<k;i++){
            sum-=nu[n-k+i];
            sum+=nu[i];
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};