class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        // generate right min;
        // iterate on array manage left max;
        // count chunks;
        int n=arr.size();
        vector<int>rmin(n+1);
        
        rmin[n]=INT_MAX;
        for(int i=rmin.size()-2;i>=0;i--){
            rmin[i] = min(rmin[i+1],arr[i]);
        }
        int leftMax=INT_MIN;
        int cnt=0;
        for(int i=0;i<n;i++){
            leftMax=max(leftMax,arr[i]);
            if(leftMax<=rmin[i+1]) cnt++;
        }
        return cnt;
    }
};