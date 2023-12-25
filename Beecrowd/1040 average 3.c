#include<stdio.h>
#include<math.h>
int main()
{
    double N1,N2,N3,N4,Average1,exam,Average2;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    Average1=((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1);
    printf("Media: %0.1lf\n",Average1);
    if(Average1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(Average1<5.0)
    {
        printf("Aluno reprovado.\n");

    }
    else if(Average1>=5.0 && Average1<=6.9)
    {

        printf("Aluno em exame.\n");
        scanf("%lf",&exam);
        printf("Nota do exame: %0.1lf\n",exam);

        Average2=(Average1+exam)/2;
        if(Average2>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media Final: %0.1lf\n",Average2);
        }
        else if(Average2<=4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media Final: %0.1lf\n",Average2);
        }

    }


    return 0;

}

