#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,a,C1=0,R1=0,S1=0,total;
    char c;
    double c1,r1,s1;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d %c",&a,&c);
        if(c=='C')
        {
            C1=a+C1;
        }
        else if(c=='R')
        {
            R1=a+R1;
        }
        else
        {
            S1=a+S1;
        }
    }
    total=C1+R1+S1;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C1);
    printf("Total de ratos: %d\n",R1);
    printf("Total de sapos: %d\n",S1);
    c1=(C1*100.00)/total;
    r1=(R1*100.00)/total;
    s1=(S1*100.00)/total;
    printf("Percentual de coelhos: %0.2lf %%\n",c1);
    printf("Percentual de ratos: %0.2lf %%\n",r1);
    printf("Percentual de sapos: %0.2lf %%\n",s1);


}
