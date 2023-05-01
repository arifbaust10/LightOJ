#include<iostream>
#include<string>
long long int summ(int n)
{

       long long int j,sum=1;
       for(j=1;j<=n;j++)
       {
           sum=sum*j;
       }
       return sum;
}
using namespace std;
int main()
{
     long long int i,j,t,n,sum;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>n;
       cout<<summ(n)<<endl;
    }

}
