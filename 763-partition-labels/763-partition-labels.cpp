class Solution {
public:
    //first need to store the char with index;
    //
    //
    vector<int> partitionLabels(string s) {
        vector<int>charidx(26,0);
        for(int i=0;i<s.size();i++){
            charidx[s[i]-'a'] = i;
        }
        vector<int> results;
        int lastIdx=0;
        int maxIndx=-1;
        
        for(int i = 0; i < s.size(); i++){
            maxIndx=max(maxIndx,charidx[s[i]-'a']);
            if(i==maxIndx){
                 results.push_back(maxIndx - lastIdx + 1);
                lastIdx = i+1;
            }
        }
        return results;
    }
};

