//C Program to Add Two Complex Numbers by Passing Structure to a Function.
#include<stdio.h>
float add(float ,float ,float,float);
struct complex
{
    int real;
    int img;
    int temp;
}p1,p2,result;
float add(float p1.n1 ,float p1.n2,float p2.n3,float p2.n4)
{
    result.real=p1.n1+p2.n3;
    result.img=p1.n2+p2.n4;
}
int main()
{

    int Real,Imaginary;
    printf("Enter the first number:\n");
    printf("Real:");
    scanf("%f",&p1.real);
    printf("Imaginary:");
    scanf("%f",&p1.img);

    printf("Enter the second number:\n");
    printf("Real:");
    scanf("%f",&p2.real);
    printf("Imaginary:");
    scanf("%f",&p2.img);
    result.temp=add(p1.real,p1.img,p2.real,p2.img);
    printf("\nResult=%0.2f+%0.2fi",Real,Imaginary);

}
