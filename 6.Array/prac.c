#include<stdio.h>
#include<unistd.h>
#include<time.h>
void Delay(int i)
{
    Sleep(i);
}
int main(){
int a[]= {73, 32, 119, 105, 115, 104, 32, 73, 32, 99, 111, 117, 108, 100, 32, 114, 101, 115, 105, 115, 116};
for(int i=0;i<10;i++)
{
printf("%c",a[i]);
Delay(2000);
}
printf("\n<3");
}
