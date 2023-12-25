#include<stdio.h>
int main()
{
    char st1[30 ]="Md. Hasan Nawab";
    char st2[30 ];

    int i=0,j, len=0;
    while(st1 !='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        st2[j]=st1[i];
    }
    st2[j]='\0';

    printf("st1= %s\n", st1);
    printf("st2=%s", st2);

}
