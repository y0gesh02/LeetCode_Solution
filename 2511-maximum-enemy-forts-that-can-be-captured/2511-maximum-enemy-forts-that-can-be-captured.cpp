class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n=forts.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(forts[i]==1){
                int cnt=0;
                int j=i+1;
                while(j<n){
                    if(forts[j]==0)cnt++;
                    else if(forts[j]==-1){
                        maxi=max(cnt,maxi);
                        break;
                    }
                    else if(forts[j]==1)break;
                    j++;
                }
                j=i-1;
                cnt=0;
                while(j>=0){
                    if(forts[j]==0)cnt++;
                    else if(forts[j]==-1){
                        maxi=max(cnt,maxi);
                        break;
                    }
                    else if(forts[j]==1)break;
                    j--;
                }
            }
        }
        return maxi;
    }
};