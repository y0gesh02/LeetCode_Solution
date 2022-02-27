class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int maxA=0;
        heights.push_back(0);
        stack<int>st;
        int n=heights.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                int h= heights[st.top()];
                st.pop();
           // if(st.empty()) ? width=i: width=i - st.top() - 1;
                int width= st.empty() ? i : i - st.top() - 1;
                maxA=max(maxA,width*h);
            }
            st.push(i);
        }
        return maxA;
    }
};