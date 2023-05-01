#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,i,b,t,c,sum;
    cin>>t;
    for(i=0;i<t;i++)
    {

        cin>>a;
        b=a / pow(10,4);
        c=a % 10;
        sum=b+c;
        cout<<"Sum = "<<sum<<endl;
    }
}
