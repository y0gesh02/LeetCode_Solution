//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        sort(words.begin(), words.end());
        unordered_map<string, int>ump;
        for(auto &i : words)    ump[i]++;
        string s;   int l = 0;
        for(auto &i : words){
            int n=i.size();
            string temp="";
            for(int j=0;j<n;j++){
                temp+=i[j];
                if(!ump[temp]){
                    n=0;
                    break;
                }
            }
            if(l<n){
                s=i;
                l=n;
            }
           
        }
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends