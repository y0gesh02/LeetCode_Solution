class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
      sort(s.begin(),s.end());
  
        int a2=(s[0]-'0'+s[1]-'0')*10+s[2]-'0'+s[3]-'0';
        return a2;
    }
};