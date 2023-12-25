#include<stdio.h>
#include<math.h>
int main()
{
    double X,C[]={1.00,0.50,0.25,0.10,0.05,0.01};
    int N[]={100,50,20,10,5,2},i,j,NOTES,COINS,X1,X2,C1[100];
    scanf("%lf",&X);
    printf("NOTAS:\n");
    X1=X*100;
    for(i=0;i<6;i++)
    {
        N[i]=N[i]*100;
        NOTES=X1/N[i];
        printf("%d nota(s) de R$ %d.00\n",NOTES,N[i]/100);
        X1=X1%N[i];
    }
    printf("MOEDAS:\n");
    X2=X1;
    for(j=0;j<6;j++)
    {
        C1[j]=C[j]*100;
        COINS=X2/C1[j];
        printf("%d moeda(s) de R$ %0.02lf\n",COINS,C[j]);
        X2=X2%C1[j];
    }
    return 0;
}

