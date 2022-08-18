class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int ,int>mp;
        for(auto it:arr) mp[it]++;
        int half=n/2;
        int ans=INT_MAX;
        vector<int>res;
        for(auto it:mp)res.push_back(it.second);
        sort(res.begin(),res.end());
        int m=res.size();
        int sum=0;
        for(int i=m-1;i>=0;i--){
            sum+=res[i];
            if(sum>=half){
               // sum=0;
                ans=min(ans,m-i);
            }
        }
        return ans;
    }
};

// 3->4
// 5->3
// 2->2
// 7->1
//     //5
    
//     // 1 2 3 4
    