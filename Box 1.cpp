#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,k;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;

        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        if(i!=t)
        {
            cout<<endl;
        }

    }
}
