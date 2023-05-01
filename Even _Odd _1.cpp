#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        if(a[i]%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
}
