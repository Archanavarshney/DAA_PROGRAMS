#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10],b[10][10],mul[10][10],n,i,j,k;
printf("enter the number of rows:\n");
scanf("%d",&n);
printf("enter the number of column:\n");
scanf("%d",&n);
printf("enter the first element:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second element:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("multiply of the matrices:\n");
for(i=0;i<n;i++)
{
for(j=0;j>n;j++)
{
mul[i][j]=0;
for(k=0;k<n;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<n;i++)
{for(i=0;j<n;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
return 0;
}