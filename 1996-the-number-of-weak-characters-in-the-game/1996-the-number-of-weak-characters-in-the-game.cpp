class Solution {
public:
    
        bool static sorted(vector<int> &a,vector<int>& b){
    if(a[0]==b[0]){
        return a[1]>b[1];
    }
    return a[0]<b[0];
}
int numberOfWeakCharacters(vector<vector<int>>& properties) {
    sort(properties.begin(),properties.end(),sorted);
    int ans=0;
    int max_def_value=INT_MIN;
    int n=properties.size();
    for(int i=n-1;i>=0;i--){
        if(properties[i][1] < max_def_value){
            ans++;
        }
        if(properties[i][1] > max_def_value){
            max_def_value=properties[i][1];
        }
    }
    return ans;
}
    
};