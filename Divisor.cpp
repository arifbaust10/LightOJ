#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<":";
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
                cout<<" "<<j;
        }
        cout<<endl;
    }
}
