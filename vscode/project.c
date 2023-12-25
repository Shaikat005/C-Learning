#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,i,a[5]= {5,10,15,20,25};
    printf("Enter a value:");
    scanf("%d",&N);
    for(i=0; i<5; i++)
    {
        if(a[i]==N)
        {
            printf("Matched!!!");
            break;
        }
    }

    return 0;
}

