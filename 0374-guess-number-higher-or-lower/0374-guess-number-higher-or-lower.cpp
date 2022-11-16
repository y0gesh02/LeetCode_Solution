class Solution {
public:
    int guessNumber(int n) {
        int i=1;
        int j=n;
        while(i<=j){
           int mid=i+(j-i)/2;
           int t=guess(mid);
           if(t==0)return mid;
           else if(t==1) i=mid+1;
           else j=mid-1;
       } 
        return 1;
    }
};