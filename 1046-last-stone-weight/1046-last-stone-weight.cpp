class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>1){
          int s1=pq.top();
          pq.pop();
          int s2=pq.top();
          pq.pop();
          if(s1!=s2){
              s1=s1-s2;
              pq.push(s1);
          }
      }
        return pq.size()>0?pq.top():0;
    }
};