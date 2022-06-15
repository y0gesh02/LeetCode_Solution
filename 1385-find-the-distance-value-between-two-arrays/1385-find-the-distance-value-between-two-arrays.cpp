class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        bool ok =true;
        int count=0;
        for(int i=0;i<arr1.size();i++)
        {
            for(int j=0;j<arr2.size();j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    ok=false;
                }
            }
            if(ok)
                count++;
            ok=true;
        }
        return count;
    }
};