class Solution {
public:
    int minimumPartition(string s, int k) {
        int n=s.size();
        int cnt=0;
        long long t=0;
        for (int i = 0; i < s.size(); i++) {
            t = t * 10 + s[i] - '0';
            if (t > k) {
                cnt++;
                t = s[i] - '0';
            }
            if (t > k)
                return -1;
        }
        return cnt+1;
    }
};