class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        int sum=0,cnt=0;
        for(int i=0;i<n;i++){
            int t=sum+costs[i];
            if(t<=coins){
                sum+=costs[i];
                cnt++;
            }
        }
        return cnt;
    }
};