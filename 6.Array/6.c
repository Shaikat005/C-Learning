#include<stdio.h>
int main()
{
    int a[ ]={10,7,14,15,17,18,35};
    int value=5,position= -1,i;

    for(i=0;i<7;i++)
    {
        if(value==a[i])
        {
             position=i+1;
             break;
        }

    }
    if(position==-1)
        printf("The value is not found.");
    else
        printf("The value is found at  position %d.", position);

}


