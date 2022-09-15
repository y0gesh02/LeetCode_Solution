class Solution {
public:
     static bool compare(int a,int b){
        return abs(a)<abs(b);
    }
    bool canReorderDoubled(vector<int>& changed) {
        
        int n = changed.size();
        if (n % 2 == 1) return false;
        sort(changed.begin(), changed.end(),compare);
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[changed[i]]++;
        }
        for (int i = 0; i < n; i++) {
          if (mp[changed[i]] == 0) continue;
          if (mp[changed[i] * 2] == 0) return false;
          mp[changed[i]]--;
          mp[changed[i] * 2]--;
        }
        return true;
    }
};