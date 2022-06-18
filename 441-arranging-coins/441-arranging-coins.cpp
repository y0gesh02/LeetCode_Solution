class Solution {
public:
    int arrangeCoins(int n) {
        long low=1;
        long high=n;
        while(low<=high){
            long mid=(low+high)/2;
            long total=mid*(mid+1)/2;
            if(total==n){
                return mid;
            }
            else if(total>n){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return int(high);
    }
};
// 1 2 3 4 5
//     \
//     t=6