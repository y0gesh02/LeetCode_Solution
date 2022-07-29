class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>t=arr;
        int n=arr.size();
        sort(t.begin(),t.end());
        unordered_map<int,int>mp;
        int cnt=1;
        for(int i=0;i<n;i++){
            if(!mp[t[i]]){
                mp[t[i]]= cnt;
                cnt+=1;
            }
        
        }
         for(int i=0;i<n;i++){
             arr[i]=mp[arr[i]];
         }
        // 5 9 12 12 28 37 56 80 100
        return arr;
    }
};