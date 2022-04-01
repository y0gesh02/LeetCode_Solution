class Solution {
public:
    int findPeakElement(vector<int>& nums) {
          int n=nums.size();
        int start=0;
        int end=n-1;
        if(n==1){
            return 0;
            //0 means index
        }
    
        if(n==2){
            int x=nums[0]>nums[1] ? 0:1;
            return x; 
            //if n==2 means one of them is ans
            //refer hello world YT
        }
           while(start<=end){
            int mid=start+(end-start)/2;
            if(
                (mid==0 || nums[mid]>=nums[mid-1]) &&
                (mid==n-1 || nums[mid]>=nums[mid+1])
              ){
                return mid;
            }    
            //if mid zero pe h or mid+1 se bada hai to ye ans hai nums[mid]>=nums[mid+1]
            //if mid  last pe  h or mid-1 se bada hai to ye ans hai nums[mid]>=nums[mid-1]
            else if(mid>0 && nums[mid-1]>=nums[mid]){
                                end=mid-1;
                
            }   
            //aree target ni h to mid ko hi aage piche karna padega 
            //mid >0 to hi move karna warna yad h na runtime error
            else{
             start=mid+1;
            }
        }
    return -1;
    }
};