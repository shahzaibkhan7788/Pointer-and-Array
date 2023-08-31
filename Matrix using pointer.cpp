#include <stdio.h>
#include <stdlib.h>
void Mult_Mat(int *matrix1, int *matrix2, int *result);
int Is_Scalar(int *result);
int main()
{
int matrix1[5][4] ;
int matrix2[4][6];
int resultMatrix[5][6];
printf("Enter the enteries of the first matrix\n");
for(int i=0;i<5;i++)
{
for(int j=0;j<4;j++)
{
scanf("%d",&matrix1[i][j]);
}
}
printf("Enter the enteries of the Second matrix matrix\n");
for(int i=0;i<4;i++)
{
for(int j=0;j<6;j++)
{
scanf("%d",&matrix2[i][j]);
}
}
Mult_Mat(&matrix1[0][0], &matrix2[0][0], &resultMatrix[0][0]);
printf("\n Result Matrix:\n");
for (int i = 0; i < 5; i++)
{
for (int j = 0; j < 6; j++)
{
printf("%d\t",resultMatrix[i][j]);
}
printf("\n");
}
int n=Is_Scalar(&resultMatrix[0][0]);
if(n==1)
printf("\n The given matrix is not a scalar matrix\n");
else
printf("The given matrix is scalar matrix\n");
return 0;
}
// Function to multiply two matrices
void Mult_Mat(int *matrix1, int *matrix2, int *result)
{
float sum = 0;
for (int i = 0; i <5; i++)
{
for (int j = 0; j <6; j++)
{
for (int k = 0; k <4; k++)
{
sum = sum + (*(matrix1 + i *4 + k)) * (*(matrix2 + k *6 + j));
}
*(result + i *6 + j) = sum;
sum = 0;
}
}
}
int Is_Scalar(int *result)
{
int flag=0;
for(int i=0;i<5;i++)
{
for(int j=0;j<6;j++)
{
if((i!=j && *(result+i*6+j)!=0))
{
flag=1;
break;
}
if(i==j && *(result+i*6+j)==*(result+i*6+j))
{
flag=1;
break;
}
}
}
if(flag==1)
return 1;
else
return 0;
}

