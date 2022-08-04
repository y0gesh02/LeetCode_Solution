class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=INT_MAX;
        for(auto it:nums){
            mini=min(mini,it);
        }
        int cnt=0;
        for(auto it:nums){
           cnt+=it-mini; 
        }
        return cnt;
        
        // find mini so we need to find moves to which array will equal
        // 1-1=0 0 steps required for making 1
        //2-1=1  1 step
        //3-1=2  2 steps
        //means to make all ele equal to mini we reqiured 3 moves
    }
};


