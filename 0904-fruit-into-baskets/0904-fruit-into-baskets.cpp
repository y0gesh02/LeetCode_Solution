class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mp;
        int n=fruits.size();
        int j=0;
        int i=0;
        int ans=INT_MIN;
        //longest subarrya with atmost 2 different numbers?
        while(j<n){
            mp[fruits[j]]++;
            if(mp.size()>2){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0)mp.erase(fruits[i]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
            
        }
        return ans;
    }
};