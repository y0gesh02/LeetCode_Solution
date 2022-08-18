class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int ,int>mp;
        for(auto it:arr) mp[it]++;
        int half=n/2;
        priority_queue<int> pq;
        for(auto it:mp)pq.push(it.second);
        int sum=0;
        int ans=0;
        while(sum<half){
            sum+=pq.top();pq.pop();
            ans+=1;
            if(sum>=half){
               return ans;
            }
        }
        return 0;
    }
};


    