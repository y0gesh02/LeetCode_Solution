//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
                // your code here

        int j=0,k=0;

        string low ="", upper="";

        for(int i=0;i<n;i++)

          {

              if(str[i] >= 97 && str[i] <= 122)

                 low += str[i];

              else upper += str[i];

          }

        sort(low.begin(),low.end());

        sort(upper.begin(),upper.end());

        

        for(int i=0;i<n;i++)

          {

              if(str[i] >= 97 && str[i] <= 122)

                 {

                     str[i] = low[j];

                     j++;

                 }

              else {

                  str[i] = upper[k];

                  k++;

              }

          }

        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends