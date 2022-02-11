class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> e;
        e=h;
        int cnt=0;
        sort(e.begin(),e.end());
        for(int i=0;i<h.size();i++){
            if(e[i]!=h[i]){
                cnt++;
            }
        }
        return cnt;
    }
};