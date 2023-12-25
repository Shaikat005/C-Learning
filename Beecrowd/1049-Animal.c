#include<stdio.h>
#include<string.h>
int main()
{
    char a[15]="vertebrado",b[15]="ave",c[15]="carnivoro",d[15]="mamifero";
    char e[15]="onivoro",f[15]="inseto",g[15]="hematofago",h[15]="herbivoro",i[15]="mamifero",j[15]="anelideo",k[15]="invertebrado";
    char a1[15],b1[15],c1[15];
    scanf("%s",a1);
    scanf("%s",b1);
    scanf("%s",c1);
    if(strcmp(a1, a) ==0)
    {
        if(strcmp(b1,b)==0)
        {
            if(strcmp(c1,c)==0)
            {
                printf("aguia\n");
            }
            else if(strcmp(c1,e)==0)
            {
                printf("pomba\n");
            }

        }
          else if(strcmp(b1,i)==0)
            {
                if(strcmp(c1,e)==0)
                {
                    printf("homem\n");
                }
                else if(strcmp(c1,h)==0)
                {
                    printf("vaca\n");
                }
            }
    }

    else if(strcmp(a1,k)==0)
    {
        if(strcmp(b1,f)==0)
        {
            if(strcmp(c1,g)==0)
            {
                printf("pulga\n");
            }
            else if(strcmp(c1,h)==0)
            {
                printf("lagarta\n");
            }
        }

        else if(strcmp(b1,j)==0)
        {
            if(strcmp(c1,g)==0)
            {
                 printf("sanguessuga\n");
            }
            else if(strcmp(c1,e)==0)
            {
               printf("minhoca\n");
            }
        }
    }
    return 0;
}
