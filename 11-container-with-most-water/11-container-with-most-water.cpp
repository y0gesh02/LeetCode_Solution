class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int i=0;
        int j=n-1;
        int maxi=0;
        while(i<j){
            int mini=min(h[i],h[j]);
            maxi=max(maxi,( mini*(j-i)));
            if(h[i]<h[j])i++;
            else j--;
        }
        return maxi;
    }
};