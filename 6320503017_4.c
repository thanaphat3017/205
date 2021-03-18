#include <stdio.h>
#include <string.h>

int main()
{
    int num,i,j,m=0,n=0;
    char pen[500];
    scanf("%d",&num);
    scanf("%s",pen);
    char d[num][num];
    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
            d[i][j]='.';
    }


    for(i=0; i<strlen(pen); i++)
    {
        if(pen[i]=='U')
        {
            if(m>0)
            {
                if(d[m][n]=='.')
                {
                    d[m][n]='|';
                }

                else if (d[m][n]=='-')
                {
                    d[m][n]='+';
                }

                m--;
                if(d[m][n]=='.')
                {
                    d[m][n]='|';
                }

                else if (d[m][n]=='-')
                {
                    d[m][n]='+';
                }


            }


        }
        else if(pen[i]=='D')
        {
            if(m<num-1)
            {
                if(d[m][n]=='.')
                {
                   d[m][n]='|';
                }

                else if (d[m][n]=='-')
                {
                    d[m][n]='+';

                }

                    m++;
                if(d[m][n]=='.')
                { d[m][n]='|';

                }

                else if (d[m][n]=='-')
                {
                    d[m][n]='+';
                }



            }

        }
        else if(pen[i]=='R')
        {
            if(n<num-1)
            {
                if(d[m][n]=='.')
                {
                     d[m][n]='-';
                }

                else if (d[m][n]=='|')
                {
                    d[m][n]='+';
                }

                    n++;
                if(d[m][n]=='.')
                {
                    d[m][n]='-';
                }

                else if (d[m][n]=='|')
                {   printf("2");
                    d[m][n]='+';

                }


            }


        }
        else if(pen[i]=='L')
        {
            if(n>0)
            {
                if(d[m][n]=='.')
                {
                     d[m][n]='-';
                }

                else if (d[m][n]=='|')
                {   printf("2");
                     d[m][n]='+';
                }

                    n--;

                if(d[m][n]=='.')
                {
                    d[m][n]='-';
                }

                else if (d[m][n]=='|')
                {   printf("2");
                     d[m][n]='+';
                }


            }



        }

    }
        for(i=0; i<num; i++)
        {
            for(j=0; j<num; j++)
                printf("%c",d[i][j]) ;
            printf("\n");

        }
}
