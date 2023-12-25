#include<stdio.h>
int main()
{
    int I,G,X,i=0,j=0,k=0,g=0;
    while(1)
    {
        scanf("%d %d",&I,&G);
        i++;
        if(I>G)
        {
            j++;
        }
        else if(I<G)
        {
            k++;
        }
        else if(I==G)
        {
            g++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&X);
        if(X==1)
        {

            continue;
        }
        else
        {
            break;
        }
    }
    printf("%d grenais\n",i);
    printf("Inter:%d\n",j);
    printf("Gremio:%d\n",k);
    printf("Empates:%d\n",g);
    if(j>k)
    {
        printf("Inter venceu mais\n");
    }
    else if(j<k)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Não houve vencedor\n");
    }
}
