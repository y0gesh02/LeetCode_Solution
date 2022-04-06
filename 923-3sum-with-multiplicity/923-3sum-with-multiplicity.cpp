class Solution {
public:
    int threeSumMulti(vector<int>& arr, int X) {
         int n=arr.size();
//          sort(nums.begin(),nums.end());
//         for(int i=0;i<n;i++){
//             if(arrr[i]==arr[i-1]&& i>0){
//                 continue;
//             }
//               int l=i+1;
//             int h=n-1;
            
//             while(l<h){
//                 if(nums[i]+nums[j]+nums[h]==target){
                    
//                 }
            
//              else if(nums[i]+nums[l]+nums[h]<target){
//                   l++;
//                 }
//                 else{
//                     h--;
//                 }
//             }
//         }
        int  mod = 1e9+7, ans = 0;
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++) {
            ans = (ans + m[X - arr[i]]) % mod;
            
            for(int j=0; j<i; j++) m[arr[i] + arr[j]]++;
        }
        return ans;
    }
};