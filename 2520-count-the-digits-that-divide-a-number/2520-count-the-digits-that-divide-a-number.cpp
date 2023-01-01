class Solution {
public:
    int countDigits(int num) {
        int t=num;
        int cnt=0;
        set<int>st;
        while(num!=0){
            int x=num%10;
            if(t%x==0)cnt++;
            num/=10;
        }
        return cnt;
    }
};