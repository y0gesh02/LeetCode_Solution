class Solution {
public:
    int hammingDistance(int x, int y) {
       // take xor then all the same bits of nums becomes zero
       // 0 1 0 1
        // cnt set bits
        int ans=x^y;
        int cnt=0;
        while(ans>0){
            cnt+= ans&1;
            ans>>=1;
        }
        return cnt;
    }
};