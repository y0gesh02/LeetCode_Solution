// for string="bbcbaba"
//     simple approach store  first occurrence of the alphabet(char) and last occurrence of the alphabet(char) and find unique char b/w  first occurrence  and last occurrence .
//     b     bca      b   
//     0              5   => 3
    
//     so we have first occurrence  and last occurrence of char so  count of unique char b/w will be our 
//     Palindromic Subsequences
    
//     c => 0
//     a => 1
    
// ans=>3+1=4

// we have to use set in if cond. bcz each Palindromic Subsequences/pair  have unique char in it ,might have duplicates in two pairs. soo....

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        vector<pair<int, int> > temp(26, {-1, -1} );
         for (int i = 0 ; i< n ;i++ ){
             if(temp[s[i]-'a'].first== -1){
                 temp[s[i]-'a'].first=i;
             }
             else{
                  temp[s[i]-'a'].second=i;
             }
             
         }
        int ans = 0 ;
        
        for (int i = 0 ; i <26 ;i++ ){
            if(temp[i].second!=-1){
                unordered_set<char> st;
                for(int j=temp[i].first + 1;j<temp[i].second;j++){
                    st.insert(s[j]); 
                }
                ans+=st.size();
           }
        }
        
        return ans;
        
        
    }
};