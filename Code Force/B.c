#include<stdio.h>
int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2,ds1,ds2,day,hr,min,sec;
    scanf("%*s %d",&d1);
    scanf("%d %*s",&h1);
    scanf("%d %*s",&m1);
    scanf("%d",&s1);
    scanf("%*s %d",&d2);
    scanf("%d %*s",&h2);
    scanf("%d %*s",&m2);
    scanf("%d",&s2);
    ds1=s1+(m1*60)+(h1*60*60)+(d1*24*60*60);
    ds2=s2+(m2*60)+(h2*60*60)+(d2*24*60*60);
    int N=ds2-ds1;
    day=N/86400;
    N=N%86400;
    hr=N/3600;
    N=N%3600;
    min=N/60;
    sec=N%60;
    printf("%d day(s)\n",day);
    printf("%d hour(s)\n",day);
    printf("%d minute(s)\n",day);
    printf("%d second(s)\n",day);

}
