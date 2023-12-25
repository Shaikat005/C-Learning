
#include<stdio.h>
int main()
{
    int i,T,Y,PA,PB;
    double GA,GB;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        Y=0;
        scanf("%d %d %lf %lf",&PA,&PB,&GA,&GB);
        while(PA<=PB)
        {
            PA=PA+((PA*GA)/100);
            PB=PB+((PB*GB)/100);
            Y++;
            if(Y>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }

        }
        if(Y<=100)
        printf("%d anos.\n",Y);
    }

}
