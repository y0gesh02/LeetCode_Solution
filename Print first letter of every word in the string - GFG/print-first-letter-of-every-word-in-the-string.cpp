// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    vector<char> ans;
	    string k="";
	    ans.push_back(S[0]);
	    for(int i=1; i<S.length(); i++){
	        if(S[i]==' ') {
	            ans.push_back(S[i+1]);
	        }
	    }// Your code goes 
	    
	    for(int i=0; i<ans.size(); i++){
	        k += ans[i];
	    }
	    return k;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 
  // } Driver Code Ends