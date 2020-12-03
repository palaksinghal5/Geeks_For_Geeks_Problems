
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}


/*You are required to complete this method*/
void printPat(int n)
{
    int t=n;
    while(t)
    {
        for(int i=n;i>0;i--)
        {
           for(int j=1;j<=t;j++){
               cout<<i<<" ";
           } 
        }
        t--;
        cout<<"$";
    }
    
    
}
