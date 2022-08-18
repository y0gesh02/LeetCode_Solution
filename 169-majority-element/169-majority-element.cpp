class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int candi=0;
        for(auto it:nums){
            if(cnt==0)candi=it;
            if(it==candi)cnt+=1;
            else cnt-=1;
        }
        return candi;
    }
};