#include<stdio.h>
int main()
{
    int i;
    for(i=1000;i>0;i--)
    {
        printf("%d %d %d %d %d\n",i,i-1,i-2,i-3,i-4);
        i=i-4;
    }
}
