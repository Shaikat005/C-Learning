#include<stdio.h>
int main()
{
    int days, weeks,months,year;
    printf("Please enter the number of year:");
    scanf("%d", &year);
    days=year*365;
    weeks=52*year;
    months=12*year;
    printf("Days= %d\n", days);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    return 0;
}
