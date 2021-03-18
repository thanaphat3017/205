#include <stdio.h>

int main()
{
    int n,i,x,y,j,k;
    scanf("%d",&n);
    int check[n];
    int num[n];
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        check[i]=x%10;
        x/=10;

    }

    scanf("%d",&y);
    for(i=0;i<n;i++)
    {
        num[i]=y%10;
        y/=10;

    }
    for(i=0;i<n;i++)
    {
        if(check[i]==num[i])
            j++;
    }

    k=n-j;
    printf("%d %d",j,k);
}
