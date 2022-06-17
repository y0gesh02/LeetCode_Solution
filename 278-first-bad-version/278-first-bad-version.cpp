// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long i=1;
        long long j=n;
        long long ans;
        while(i<=j){
            long long mid=(i+j)/2;
            if(isBadVersion(mid)){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};