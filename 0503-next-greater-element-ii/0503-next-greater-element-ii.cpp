class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        //as circular array first put arr ele in stack
        stack<int> st;
        vector<int> ans;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
			st.push(arr[i]); //121
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
