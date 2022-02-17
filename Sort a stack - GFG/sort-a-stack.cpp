// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends

void insertSorted(stack<int> &s,int num){
    if(s.empty() || s.top()<num){
        s.push(num);
        return;
    }
    int temp=s.top();
    s.pop();
    insertSorted(s,num);
    s.push(temp);
    
}
void SortedStack :: sort()
{
    if(s.empty())
        return;
    int num=s.top();
    s.pop();
    sort();
    insertSorted(s,num);
   //Your code here
}