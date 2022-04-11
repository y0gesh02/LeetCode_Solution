class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        int mod=pow(10,9)+7;
        priority_queue <int, vector<int>, greater<int>> pq;
        for(auto it:nums){
            pq.push(it);
        }
        while(k--){
            int temp=pq.top();
            pq.pop();
            temp+=1;
            pq.push(temp);
        }
        long long int ans=1;
        while(pq.size()>0){
            int it=pq.top();
            pq.pop();
            ans=(ans*it)%mod;
        }
        return ans;
    }
};