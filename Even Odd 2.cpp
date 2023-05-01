#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,a,l;
    char n[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        if(i==0)
        getchar();
        gets(n);
        l=strlen(n);
        a=n[l-1]-48;
        if(a%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
}
