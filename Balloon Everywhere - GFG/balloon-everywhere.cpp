//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        unordered_map<char,int>mp;

       for(int i=0;i<s.size();i++){

           mp[s[i]]++;

       }
       //ballon

         int bCount = mp['b'];
        int aCount = mp['a'];
        int nCount = mp['n']; 
        int lCount = mp['l'];
      lCount/=2;
        int oCount = mp['o'];
        oCount/=2;
    
        int mini=min({bCount,aCount,nCount,lCount,oCount});
       return mini;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends