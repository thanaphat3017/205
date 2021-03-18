#include <stdio.h>

int main()
{
    char x;
    int ch,order,y,z,i,j,k=0,max;
    scanf("%d %d",&ch,&order);
    int check[ch],num[ch];
    for(i=0;i<ch ;i++)
    {
        check[i]=0;
        num[i]=0;
    }
    for(i=0;i<order;i++)
    {
        scanf(" %c %d %d",&x,&y,&z);
        if(x=='P')
        {
            max=num[y-1];
            for(j=y;j<z;j++)
            {

                if(max<num[j])
                    max=num[j];

            }

            check[k]=max;
            k++;
        }
        if(x=='U')
        {
           num[y-1]=z;
        }
    }
    for(i=0;i<k;i++)
        printf("%d\n",check[i]);


}
