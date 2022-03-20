// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
      
        Rearrange( arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} // } Driver Code Ends




void Rearrange(int arr[], int n)
{
   vector<int> neg;
   vector<int> pos;
   int i=0;
   while(i<n){
       if(arr[i]<0)
       neg.push_back(arr[i]);
       else
       pos.push_back(arr[i]);
       i++;
   }

   int j=0;
   while(j<neg.size()){
       arr[j]=neg[j];
       j++;
   }
   int k=0;
   while(k<pos.size()){
       arr[j]=pos[k];
       j++;
       k++;
   }
}