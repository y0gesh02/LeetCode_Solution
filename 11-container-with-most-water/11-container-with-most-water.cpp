class Solution {
public:
    int maxArea(vector<int>& he) {
        int n=he.size();
        int l=0;
        int h=n-1;
        int area=0;
        while(l<h){
            area=max(area,(min(he[l],he[h]))*(h-l));
            if(he[l]<he[h]){
                l++;
            }
            else{
                h--;
            }
        }
        return area;
    }
};