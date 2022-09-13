class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int j=0;
        long long sum=0;
        long long mini=INT_MAX;
        deque<pair<long long,long long>>dq;
        while(j<n){
            sum+=nums[j];
            if(sum>=k) mini = min(mini,(long long)j+1);
            while(!dq.empty() and sum-dq.front().first>=k){
                mini = min(mini,j-dq.front().second);
                dq.pop_front();
            }
            while(!dq.empty() && sum<dq.back().first)dq.pop_back();
            dq.push_back({sum,j});
            j++;
        }
        return mini==INT_MAX?-1:mini;
    }
};
//  int n = nums.size();
//         long long ans = INT_MAX, sum = 0;
//         deque <pair<long long,long long>> q;
//         for(int i = 0; i<n; i++){
//             sum += nums[i];
            
//             // To mark a subarray that starts from 0 and end at current index
//             if(sum>=k) ans = min(ans,(long long)i+1);
            
//             // To remove all the extra elements from left front
//             while(!q.empty() and sum-q.front().first>=k){
//                 ans = min(ans,i-q.front().second);
//                 q.pop_front();
//             }
//             // To ensure the monotonic nature of our deque
//             while(!q.empty() and sum<q.back().first) q.pop_back();
//             q.push_back({sum,i});
//         }
//         return ans==INT_MAX ? -1 : ans;