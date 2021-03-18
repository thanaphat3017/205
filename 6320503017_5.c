#include <stdio.h>

int main()
{   int  w,h,sum=0,ans;
    scanf("%d %d",&w,&h);
    int area[w][h],i,j;
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            scanf("%d",&area[i][j]);
        sum+=area[i][j];
        }

    }
    for(i=sum;;i++)
    {
        if(i%(w*h)==0)
        {
            ans=i;
            break;
        }


    }


   printf("%d",ans-sum);
}
