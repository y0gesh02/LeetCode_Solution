class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        vector<int> window(26,0);
        int len=s2.size(), k=s1.size();
        if(len < k) return false;
        for(int i=0;i<k;i++){
            window[s1[i]-'a']++;
            freq[s2[i]-'a']++;
        }
        int i=0;
        while(k<len){
            if(window==freq){
               return true;
            }
            freq[s2[k]-'a']++;
            freq[s2[i]-'a']--;
            k+=1;
            i+=1;
        }
        if(window==freq)return true;
        return false; 
    }
};