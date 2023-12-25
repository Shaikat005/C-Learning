#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calculate_the_maximum(int max, int value,int k)
{
    if(value>max && value<k)
    {
        return value;
    }
    else
        return max;
}

int main()
{
    int n, k,i,j,value,maxAND=0,maxOR=0,maxXOR=0;
    scanf("%d %d", &n, &k);
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            value=i&j;
            maxAND=calculate_the_maximum(maxAND, value,k);
            value=i|j;
            maxOR=calculate_the_maximum(maxOR,value,k);
            value=i^j;
            maxXOR=calculate_the_maximum(maxXOR,value,k);
        }
    }
    printf("%d\n%d\n%d\n",maxAND,maxOR,maxXOR);

    return 0;
}

