class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& nums) {
     //   int prefix=0;
        
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum %3 != 0 ) return false;
        int require=sum/3;
        int cnt=0;
        int temp=0;
        for(int i=0;i<nums.size();i++){
              temp+=nums[i];
              
               if(temp==require){
                  cnt+=1;
                   temp=0;
                }
              
         }
        return cnt>=3;
    }
};

//cnt>=3 --> 0 0 0 0
//0