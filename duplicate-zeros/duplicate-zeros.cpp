class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int size=arr.size();
        int p1=0;
        while(p1<size-1){
            if(arr[p1]==0){
            for(int i=size-1; i>p1; i--){
                arr[i]=arr[i-1];
            }
                arr[p1+1]=0;
                p1++;
        }
            p1++;
        }
    }
};