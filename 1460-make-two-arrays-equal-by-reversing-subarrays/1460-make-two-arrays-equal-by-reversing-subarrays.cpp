class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int count[1001] = {0};
        for (int i = 0; i < target.size(); ++i) {
            count[target[i]]++;
            count[arr[i]]--;
        }
        for (int i = 0; i < 1001; ++i) {
            if (count[i] != 0) return false;
            
        }
        return true;
        
    }
};