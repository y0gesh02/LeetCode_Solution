class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        set<int> st;
        for(auto it:arr){
            st.insert(it);
        }
	    unordered_map<int,int> mp;
	    int cnt=1;
	    for(auto it: st) {
            mp[it]=cnt;
            cnt+=1;
        } 
	    for(int i=0;i<n;i++){
             arr[i]=mp[arr[i]];
         }
	return arr;
    }
};