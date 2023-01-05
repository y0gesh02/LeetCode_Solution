class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        int m=points[0].size();
        sort(points.begin(),points.end());
        int ans=0;
        int minend=0;
        int i=0;
        while(i<n){
            minend= points[i][1];
            while(i<n&& minend>=points[i][0]){
                minend=min(minend,points[i][1]);
                i++;
            }
            ans++;
        }
        return ans;
    }
};