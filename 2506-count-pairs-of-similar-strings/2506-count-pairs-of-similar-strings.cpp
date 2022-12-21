class Solution {
public:
    int similarPairs(vector<string>& words) {
        map<set<char>,int>mp;
        for(auto it:words){
            set<char>st;
            for(auto i:it){
                st.insert(i);
            }
            mp[st]++;
        }
        int ans=0;
        for(auto it:mp){
            if(it.second>1){
                int t=it.second;
                ans+=(t*(t-1))/2;;
            }
        }
        return ans;
    }
};