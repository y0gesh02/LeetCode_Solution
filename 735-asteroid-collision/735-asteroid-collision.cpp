class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
         vector<int>s;
        int n= arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                s.push_back(arr[i]);
            }
            else{
                while(!s.empty() && s.back()>0 && s.back()<abs(arr[i]))s.pop_back();
                if(s.empty() || s.back()<0) s.push_back(arr[i]);
                else if(s.back()==-arr[i])s.pop_back();
                
            }
            
        }
        return s;
    }
};


 