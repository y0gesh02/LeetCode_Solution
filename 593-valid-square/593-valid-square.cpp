class Solution {
    double dist(vector<int>&a ,vector<int>&b){
        return sqrt((b[0]-a[0])*(b[0]-a[0])+(b[1]-a[1])*(b[1]-a[1]));
    }
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> points = {p1, p2, p3, p4};
        set<double> st;
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                double temp=dist(points[i],points[j]);
                if(temp==0)return false;
                st.insert(temp);
            }
            
        }
        return st.size()==2;
    }
};