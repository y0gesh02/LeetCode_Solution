class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int maxImpact=0,chunks=0;
        for(int i=0;i<n;i++){
           
            maxImpact=max(maxImpact,arr[i]);
             if(maxImpact==i)chunks++;
        }
        return chunks;
    }
};