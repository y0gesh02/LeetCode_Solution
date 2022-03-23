class Solution {
public:
    int brokenCalc(int startValue, int target) {
        if(startValue==target)return 0;
        int cnt=0;
       while(startValue<target){
       
           if(target%2==0 ){
               target/=2;
               
           }
           else{
               target+=1;
           }
           cnt++;
       } 
        return cnt+startValue-target;
    }
};