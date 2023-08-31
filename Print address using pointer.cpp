
#include <stdio.h>
#include <stdlib.h>
struct Mult_Complex
{
float real;
float img;
};
int main()
{
Mult_Complex c1,c2,c3,c4,c5,c6;
printf("Enter the real value of C1:\n");
scanf("%f",&c1.real);
printf("Enter the Imaginary value of C1:\n");
scanf("%f",&c1.img);
printf("Enter the real value of C2:");
scanf("%f",&c2.real);
printf("Enter the Imaginary value of C2:");
scanf("%f",&c2.img);
c3.real=c1.real+c2.real;
c3.img=c1.img+c2.img;
printf("Addition of complex Number is :%.1f+%.1f(i)\n",c3.real,c3.img);
c4.real=c2.real+c3.real;
c4.img=c2.img+c3.img;
printf("Multiplication of complex Number is :%.1f(i)\n",c4.real*c4.img);
c5.real=c4.real-c1.real;
c5.img=c4.img-c1.img;
printf("Subtraction of complex Number is :%.1f-%.1f(i)\n",c4.real,c4.img);
c6.real=c3.real+c4.real;
c6.img=c3.img+c4.img;
printf("Subtraction of complex Number is :%.1f/%.1f(i)\n",c6.real,c6.img);
}
