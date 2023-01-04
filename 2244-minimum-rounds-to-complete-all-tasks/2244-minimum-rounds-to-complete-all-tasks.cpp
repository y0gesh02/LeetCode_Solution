class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       unordered_map<int,int>mp;
        int n=tasks.size();
        for(int i=0;i<n;i++)mp[tasks[i]]++;
        int ans=0;
        int t=0;
        for(auto it:mp){
             if(it.second==1){
                  return -1; 
                }
               else if(it.second%3==0){
                    ans+=it.second/3;
               }
               else{
               ans+=it.second/3+1;
                
            }
            
        }
        return ans;
    }
};