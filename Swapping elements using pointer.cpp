#include<stdio.h>
void Swap_Array(int *A,int *B);
int main()
{
int A[10],B[10];
int size;
printf("Please enter the entry of the first array:\n");
for(int i=0;i<10;i++)
{
scanf("%d",&A[i]);
}
printf("Please enter the entry of the second array:\n");
for(int i=0;i<10;i++)
{
scanf("%d",&B[i]);
}
printf("Elements of first array is:\n");
for(int i=0;i<10;i++)
{
printf("%d\t",A[i]);
}
printf("\n Elements of Second array is:\n");
for(int i=0;i<10;i++)
{
printf("%d\t",B[i]);
}
printf("\n After swapping\n");
Swap_Array(A,B);
}
void Swap_Array(int *A ,int *B)
{
for(int i=0;i<10;i++)
{
int temp=A[i];
A[i]=B[i];
B[i]=temp;
}
printf("Elements of first array is:\n");
for(int i=0;i<10;i++)
{
printf("%d\t",A[i]);
}
printf("\n Elements of Second array is:\n");
for(int i=0;i<10;i++)
{
printf("%d\t",B[i]);
}
}

