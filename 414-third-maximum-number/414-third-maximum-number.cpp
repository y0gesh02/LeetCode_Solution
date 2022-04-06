class Solution {
public:
    
       int thirdMax(vector<int>& nums) {
        set<int> s;
        
        for(int &n: nums)
            s.insert(n);
        
        return s.size()<3 ? *max_element(s.begin(),s.end()) : *next(s.begin(), s.size() - 3);
    }
    
};