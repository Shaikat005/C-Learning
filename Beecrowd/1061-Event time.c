#include<stdio.h>
int main()
{
    int w,x,y,z,d1,h1,m1,s1,d2,h2,m2,s2,X,Y,S;
    char dia1[5],dia2[5],del[5];
    scanf("%s %d %d %s %d  %s %d",dia1,&d1,&h1,del,&m1,del,&s1);
    scanf("%s %d %d %s %d  %s %d",dia2,&d2,&h2,del,&m2,del,&s2);

    X=(d1*24*60*60)+(h1*60*60)+(m1*60)+s1;
    Y=(d2*24*60*60)+(h2*60*60)+(m2*60)+s2;
    S=Y-X;
    w=S/(60*60*24);
    x=(S-(w*60*60*24))/(60*60);
    y=(S-(w*60*60*24)-(x*60*60))/60;
    z=(S-(w*60*60*24)-(x*60*60)-(y*60));

    printf("%d day(s)\n",w);
    printf("%d hour(s)\n",x);
    printf("%d minute(s)\n",y);
    printf("%d second(s)\n",z);

}
