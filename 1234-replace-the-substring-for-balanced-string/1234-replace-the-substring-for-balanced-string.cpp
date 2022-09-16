class Solution {
public:
    int balancedString(string s) {
        unordered_map<int, int> mp;
        int n = s.length(), res = n, i = 0, k = n / 4,j=0;
        for(auto it:s)mp[it]++;
        while(j<n){
            mp[s[j]]--;
            while(i < n && mp['Q'] <= k && mp['W'] <= k && mp['E'] <= k && mp['R'] <= k){
                res = min(res, j - i + 1);
                mp[s[i]] ++;
                i++;
            }
            j++;
        }
        return res;
    }
};
