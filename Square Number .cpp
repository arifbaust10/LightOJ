#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,a;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a;
        for(j=0;j<=a;j++)
        {
            n=j*j;
            if(n<=a)
            {
                if(n==a)
                {
                    cout<<"YES";
                    break;
                }
            }
            else if(n>a)
            {
                cout<<"NO";
                break;
            }
        }
        cout<<endl;
    }
}
