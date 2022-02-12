class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(i<10){
                ans.push_back(i);
            }
            else{
                int x=i;
                while(x>0){
                    int div=x%10;
                    if(div==0 || i%div!=0){
                        break;
                    }
                    x=x/10;
                }
                if(x==0){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};
  