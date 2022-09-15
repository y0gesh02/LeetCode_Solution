class Solution {
public:
    int climbStairs(int n) {
        
         if(n <= 0) return 0;
         if(n == 1) return 1;
         if(n == 2) return 2;
        int prev1=2;
        int prev2=1;
        for(int i=3;i<=n;i++){
            int curri=prev1+prev2;
            prev2=prev1;
            prev1=curri;
        }
        
      
        return prev1;
    }
};