class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //int n=s.size();
       unordered_map<char,char> mp;
        unordered_map<char,int>mp2;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]])//s[i] is maped
            {
                if(mp[s[i]] != t[i]) //and it is not maped with t[i];
                {
                    return false;
                }
            }else{
                if(mp2[t[i]])//maped2 contain h
                {
                    return false;
                }else{
                   mp2[t[i]] = 1;
                    mp[s[i]] = t[i];
                }
            }
        }//see pepcoding video for clear
        return true;
    }
};