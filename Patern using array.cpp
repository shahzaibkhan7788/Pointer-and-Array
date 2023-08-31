#include<stdio.h>
void Add_Table(int n);
int main()
{
int n;
printf("Please enter the number of rows:");
scanf("%d",&n);
while(n<1 || n>15)
{
scanf("%d",&n);
}
Add_Table(n);
}
void Add_Table(int n)
{
for(int i=0;i<n;i++)
{
for(int j=i;j<n+i;j++)
{
printf("%d\t",j);
}
printf("\n");
}
}

