#include<iostream>
using namespace std;
int main()
{
    int i,j,k,a[3],t,temp,c=1;
    cin>>t;
    for(k=0; k<t; k++)
    {
        for(j=0; j<3; j++)
            cin>>a[j];
        if(a[0]!=a[1] && a[1]!=a[2] && a[0]<=1000 && a[1]<=1000 && a[2]<=1000)
        {
            cout<<"Case "<<c<<":";
            for(i=0; i<3-1; i++)
                for(j=0; j<3-1-i; j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            for(i=0; i<3; i++)
            {
                cout<<" "<<a[i];
            }
            c++;
        }
        cout<<endl;
    }

}
