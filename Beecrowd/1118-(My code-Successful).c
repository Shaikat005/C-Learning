
#include<stdio.h>
int main()
{
    float a,A[3],media;
    int i,j=0,X,k;
    for(k=0;k<500;k++)
    {
    for(i=0; i<500; i++)
    {
        while(j<2)
        {
            scanf("%f",&a);
            if(a>=0 && a<=10)
            {
                A[j]=a;
                j++;
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        if(j>2)
        {
            break;
        }

    }
    media=(A[0]+A[1])/2.0;
    printf("media = %0.2f\n",media);
    j=0;


        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&X);
        while(X<1 || X>2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&X);
        }
        if(X==1)
        {
            continue;
        }
           if (X==2)
        {
            break;
        }
    }
}
