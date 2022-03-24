class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int sum=0;
        int cnt=0;
        int i=0,j=n-1;
        while(i<=j){
    
          
             if(people[j]+people[i]<=limit){
                cnt++;
                i++;
                j--;
            }
             else if(people[j]+people[i]>limit){
                cnt++;
                
                j--;
            }
        }
        return cnt;
    }
};
      // for(int i=0;i<people.size();i++){
      //       sum+=people[i];
      //        if(limit== sum){
      //            cnt++;
      //       }
      //   }
      //   if(limit== sum){
      //       return cnt;
      //   }
      //   return sum/limit;