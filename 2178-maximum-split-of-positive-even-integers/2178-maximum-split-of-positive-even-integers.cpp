class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        if(finalSum%2!=0 )return vector<long long>{};
        vector<long long> ans;
        for(int i = 2;i<=finalSum;i+=2){
            ans.push_back(i);
            finalSum-=i;
        }
        ans.back()+=finalSum;
        return ans;
    }
};