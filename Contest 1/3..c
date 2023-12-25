#include<stdio.h>
int main()
{
    char st1[ ]="Hajj",st2[ ]="Umrah",st3[ ]="*";
    char st[10];
    int i=1;

    for(i=1;; i++)
    {
        scanf("%s",st);
        if(strcmp(st,st1)==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);

        }
        else if(strcmp(st,st2)==0)
        {
            printf("Case %d: Hajj-e-Asghar\n",i);

        }
        else if(strcmp(st,st3)==0)
        {
            break;
        }

    }
    return 0;
}
