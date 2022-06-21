class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       // sort(arr.begin().arr.end());
        
        unordered_set<int>mp;
        mp.insert(arr[0]);
        for(int i=1;i<arr.size();i++){
           if(arr[i]%2==0 && mp.count(arr[i]/2)){
               return true;
           }
            if( mp.count(arr[i]*2) ) {
                   return true;
            }
            mp.insert(arr[i]);
           
        }
        return false;
    }
};
// 2 3 5 10
// 1 7 11 14