class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
        for(auto it:words){
            string t="";
            for(auto x:it){
                t+=morse_code[x-'a'];
            }
            
            s.insert(t);
        }
        return s.size();
    }
    
};