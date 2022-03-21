class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
         vector<string>ans(n,"");
         priority_queue<pair<int,int>> pq;
        for(int i=0;i<n;i++){
             pq.push(make_pair(score[i],i));
        }
        int i=0;
        int cnt=1;
        while(i<score.size()){
            int top=pq.top().second;
            
           
            if(cnt==1){
               ans[top]="Gold Medal";
            }
            else if(cnt==2){
               ans[top]="Silver Medal";
            }
            else if(cnt==3){
               ans[top]="Bronze Medal";
            }
            
            else{
              ans[top]=to_string(cnt);
            }
            pq.pop();
          
            cnt+=1;
            i++;
            
        }
        
        return ans;
    }
};