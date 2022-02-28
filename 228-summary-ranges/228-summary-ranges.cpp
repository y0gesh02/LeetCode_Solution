class Solution {
public:
    void push(vector<string>& v, int p1, int p2){
        if(p1==p2){
            v.push_back(to_string(p1));
        }
        else{
            v.push_back(to_string(p1)+"->"+to_string(p2));
        }
    }
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        if(nums.size()==0) return v;
        int p1=nums[0];
        int p2=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]+1){
                p2=nums[i];
            }
            else{
                push(v,p1,p2);
                p1=nums[i];
                p2=nums[i];
            }
        }
        push(v,p1,p2);
        return v;
    }
};