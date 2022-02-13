class Solution {
    // private:
    void subsets(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& answerVector) 
    {
        answerVector.push_back(sub);
        for (int j = i; j < nums.size(); j++) {
            sub.push_back(nums[j]);
            subsets(nums, j + 1, sub, answerVector);
            sub.pop_back();
    }
    }
public:
     vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answerVector;
        vector<int> sub;
        subsets(nums, 0, sub, answerVector);
        return answerVector;
    }
// // private:
//     void subsets(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& answerVector) 
//     {
//         answerVector.push_back(sub);
//         for (int j = i; j < nums.size(); j++) {
//             sub.push_back(nums[j]);
//             subsets(nums, j + 1, sub, answerVector);
//             sub.pop_back();
//         }
   // }
};