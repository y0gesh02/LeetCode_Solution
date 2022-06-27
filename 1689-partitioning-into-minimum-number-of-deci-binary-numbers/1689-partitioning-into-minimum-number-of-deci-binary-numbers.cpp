class Solution {
public:
    int minPartitions(string n) {
        //if(n<10)return n;
        int maxi=0;
     for(int i=0;i<n.size();i++){
        int t= n[i]-'0';
         maxi=max(maxi,t);
     }
        return maxi;
    }
};
// 4 1 1 1 1
// 5 1 1 1 1 
//     10 -10
//     11 -11
//     12 -11+1
//     21- 10 +11
//     31-10+10+11
//     47- 11+11+11+11+1+1+1
//     10 +10 +10+10 +