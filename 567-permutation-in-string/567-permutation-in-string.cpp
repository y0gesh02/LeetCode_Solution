class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       
         vector<int> freq(26,0);
        vector<int> window(26,0);
        int i=0, j=0;
        int len=s2.size();
        int k=s1.size();
        if(len < k)
        {
          return false;
        }
        while(j<k){
            freq[s2[j]-'a']+=1;
            window[s1[j]-'a']+=1;
            j++;
        }
        j-=1;
        while(j<len){
            if(window==freq){
               return true;
            }
             j+=1;
            if(j!=len){
                freq[s2[j]-'a']+=1;
            }
            freq[s2[i]-'a']-=1;
           
            i+=1;
        }
        return false; 
    }
};