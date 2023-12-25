#include<stdio.h>
int main()
{
    double s,x;
    scanf("%lf",&s);
    if(s>=0.00 && s<=2000.00)
    {
        printf("Isento\n");
    }
    else if(s>2000.00 && s<= 3000.00)
    {
        s=s-2000.00;
        x=(s*8)/100;
        printf("R$ %.2lf\n",x);
    }
    else if(s>3000.00 && s<=4500.00)
    {
        s=s-3000.00;
        x=(s*18)/100;
        printf("	R$ %.2lf\n",x+80);
    }
    else if(s>4500.00)
    {
        s=s-4500.00;
        x=(s*28)/100;
        printf("R$ %.2lf\n",x+80+270);
    }
}
