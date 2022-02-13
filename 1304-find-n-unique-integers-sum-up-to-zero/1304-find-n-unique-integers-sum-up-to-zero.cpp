class Solution {
public:
    vector<int> sumZero(int n) {
       vector<int> ans;
        int cnt=0;
        if(n%2!=0){
            ans.push_back(0);
             cnt+=1;
        }
        
        int i=1;
        while(cnt<n){
            ans.push_back(i);
            ans.push_back(-i);
             cnt+=2;
            i++;
    
        }
        return ans;
    }
};