class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i=1;
        long long j=num;
        while(i<=j){
            long long mid=(i+j)/2;
            long long temp=mid*mid;
            if(temp==num){
                return true;
            }
            else if(temp>num){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return false;
    }
};