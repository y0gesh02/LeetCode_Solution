class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        stack<int> st;
		vector<int> ans;
		for(int i=arr.size()-1;i>=0;i--){
			st.push(arr[i]);
        }
        
        int i=arr.size()-1;
        while(i>=0){
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
            i--;
        }
       reverse(ans.begin(),ans.end());

        return ans;
    }
};
//1 2 1 1 2 1
// 2 -1 2 2-1 -1         -1
// 2 -1 -1
// -1 -1  2
    
// 2 3    4 -1 -1
// -1 -1 -1 -1 4