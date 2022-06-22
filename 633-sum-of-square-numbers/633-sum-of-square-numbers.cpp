class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        long long j= sqrt(c);
        while(i<=j){
            long long t=i*i;
            long long temp= j*j;
            long long com=t+temp;
            if(com==c){
                return true;
            }
            else if(com>c){
                j--;
            }
            else {
                i++;
            }
        }
        return false;
    }
};