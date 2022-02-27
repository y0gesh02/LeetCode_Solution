class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int maxA=0;
        heights.push_back(0);
        stack<int>st;
       
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int h= heights[st.top()];
                st.pop();
                int width= st.empty() ? i : i - st.top() - 1;
                maxA=max(maxA,width*h);
            }
            st.push(i);
        }
        return maxA;
    }
};