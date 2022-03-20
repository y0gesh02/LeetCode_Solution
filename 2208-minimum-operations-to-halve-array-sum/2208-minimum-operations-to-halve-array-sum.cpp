class Solution {
public:
    int halveArray(vector<int>& nums) {
        int n=nums.size();
          priority_queue<double> q;
        double sum=0;
         for(int i=0;i<n;i++){
             sum+=nums[i];
             q.push(nums[i]);
         }
        int cnt=0;
        double halfsum=sum/2;
       
        while(!q.empty()){
            
            double e=q.top();
            q.pop();
            sum-=e/2;
            q.push(e/2);
            cnt++;
            if(sum<=halfsum){
                return cnt;
            }
            
            
        }
        return -1;
    }
};

//   if(i!=0 && nums[i]/2>=nums[i-1]){
//                 while(nums[i]/2>=nums[i-1] &&i!=0){
//                 // checksum+=nums[i]/4;
//                 cnt+=2;
//                 sum=sum-nums[i]+nums[i]/4;
//                     nums[i]=nums[i]/4;
//             }
//             }
//             else{
                
//                 sum=sum-nums[i]+nums[i]/2;
//                 cnt+=1;
//             }
//             if(sum>=halfsum){
//                 return cnt;