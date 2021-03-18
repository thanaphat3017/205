#include <stdio.h>
#include <string.h>

int main()
{

int paper,i,j,k,m=0,n=0;
    char pen[500];
    scanf("%d" ,&paper);
    char draw[paper][paper];
    scanf("%s" ,pen);
    for(i=0;i<paper;i++)
    {
        for(j=0;j<paper;j++)
        {
            draw[i][j]='.';
        }
    }
    for(i=0;i<strlen(pen);i++)
    {
        if(pen[i]=='U')
        {
            if(m>0)
            {
                if(draw[m][n]=='.')
                {
                    draw[m][n]='|';
                }
                else if(draw[m][n]=='-')
                {
                    draw[m][n]='+';
                }
                m--;
                if(draw[m][n]=='.')
                {
                    draw[m][n]='|';
                }
                else if(draw[m][n]=='-')
                {
                    draw[m][n]='+';
                }
            }
        }
        else if(pen[i]=='D')
        {
            if(m<paper-1)
            {
                if(draw[m][n]=='.')
                {
                    draw[m][n]='|' ;
                }
                else if(draw[m][n]=='-')
                {
                    draw[m][n]= '+' ;
                }
                m++;
                if(draw[m][n]=='.')
                {
                    draw[m][n]='|';
                }
                else if(draw[m][n]=='-')
                {
                    draw[m][n]='+';
                }
            }
        }
else if(pen[i]=='L')
        {
            if(n>0)
            {
                if(draw[m][n]=='.')
                {
                    draw[m][n]='-';
                }
                else if(draw[m][n]=='|')
                {
                    draw[m][n]='+';
                }
                n--;
                if(draw[m][n]=='.')
                {
                    draw[m][n]='-';
                }
                else if(draw[m][n]=='|')
                {
                    draw[m][n]='+';
                }
            }
        }
        else if(pen[i]=='R')
        {
            if(n<paper-1)
            {
                if(draw[m][n]=='.')
                {
                    draw[m][n]='-';
                }
                else if(draw[m][n]=='|')
                {
                    draw[m][n]='+';
                }
                n++;
                if(draw[m][n]=='.')
                {
                    draw[m][n]='-';
                }
                else if(draw[m][n]=='|')
                {
                    draw[m][n]='+';
                }
            }
        }
    }
for(i=0;i<paper;i++)
    {
        for(j=0;j<paper;j++)
        {
            printf("%c" ,draw[i][j]);
        }
        printf("\n");
    }
}
