class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        
       int prev2=0,prev1=1;
        for(int i=2;i<=n;i++){
            int currF=prev2+prev1;
            prev2=prev1;
            prev1=currF;
        }
        return prev1;
    }
};
//0 1 1 2