// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int num) {
    // Your code here
     if(num==0)
   {
       return 1;
   }
   int ans=0,tmp=1;
   while(num>0)
   {
       int d=num%10;
       if(d==0)
       {
           d=5;
       }
       ans=d*tmp+ans;
       num=num/10;
       tmp=tmp*10;
   }
   return ans;
}