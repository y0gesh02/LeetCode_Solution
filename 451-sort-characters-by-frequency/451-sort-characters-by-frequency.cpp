class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto it:s){
           mp[it]++; 
        }
        priority_queue<pair<int,char>> maxh;
        for(auto it:mp){
            maxh.push({it.second,it.first});
        }
        string ans="";
        while(!maxh.empty()){
            int n=maxh.top().first;
            char ch=maxh.top().second;
            maxh.pop();
            for(int i=0;i<n;i++){
                ans+=ch;
            }
           
        }
        return ans;
    }
};