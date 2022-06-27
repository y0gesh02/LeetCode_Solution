class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
     unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        int cnt=1;
        for(auto it:mp){
            if(it.second%2==0){
                cnt+=it.second;
            }
            else{
                cnt+=it.second-1;
            }
            
        }
        
        return cnt>n?n:cnt;
    }
};