class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=target.size();
        if(n==1 && target[0]==arr[0])return true;
        if(n==1 && target[0]!=arr[0])return false;
        sort(arr.begin(),arr.end());
        sort(target.begin(),target.end());
        if(arr==target)return true;
        else return false;
        
    }
};