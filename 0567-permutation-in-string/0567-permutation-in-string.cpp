class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        vector<int> window(26,0);
        int len=s2.size(), k=s1.size();
        if(k>len)return 0;
        for(int i=0;i<k;i++){
            freq[s2[i]-'a']++;
            window[s1[i]-'a']++;
        }
        int j=0;
        if(window==freq)return 1;
        for(int i=k;i<len;i++){
            if(window==freq)return 1;
            freq[s2[i]-'a']++;
            freq[s2[j]-'a']--;
            j++;
        }
        if(window==freq)return 1;
        return 0;
                   
    }
                   
};