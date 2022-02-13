class Solution {
public:
    int countDigits(int a){  // 12
        int cnt=0;
        while(a>0){      //1>=0
        a=a/10;             //0
        cnt++;        //2
        }
        return cnt;    //2
    }
    int findNumbers(vector<int>& nums) {   // 12, 2,3
        int ans=0;
        int x=0;
        for(int i=0; i<nums.size(); i++){
            ans=countDigits(nums[i]);     // 2
            if(ans%2==0) x++;
        }
        return x;
    }
};