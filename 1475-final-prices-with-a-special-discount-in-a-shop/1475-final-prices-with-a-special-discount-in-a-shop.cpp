class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()>prices[i])
                st.pop();
            int t=prices[i];
            if(!st.empty()) prices[i]-=st.top();
            st.push(t);
        }
        return prices;
    }
};

