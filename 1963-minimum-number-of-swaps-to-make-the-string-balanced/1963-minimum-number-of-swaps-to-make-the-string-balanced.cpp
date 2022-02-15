class Solution {
public:
    int minSwaps(string s) {
            int maxi=0;
            int close = 0;
        for (int i = 0; i < s.length (); i++) {
            if(s[i]=='['){
                close++;
            }
            else if(close>0){
                close--;
            }
            maxi=(maxi,close);
        }
        return (maxi+1)/2;
    }
};