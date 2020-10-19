#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
int main()
{
int a[10][10] ,b[10][10] ,c[10][10],i,j;
int  a1,b2,c3,d4,e5,f6,g7;
printf("enter the 4 element of first matrix:");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
printf("enter the 4 element of second matrix:");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&b[i][j]);
printf("\n the first matrix is\n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<2;j++)
printf("%d\t",a[i][j]);
}
printf("\n the second matrix is\n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<2;j++)
printf("%d\t",b[i][j]);
}
a1=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
b2=(a[1][0]+a[1][1])*(b[0][0]);
c3=a[0][0]*(b[0][1]-b[1][1]);
d4=a[1][1]*(b[1][0]-b[0][0]);
e5=(a[0][0]+a[0][1])*b[1][1];
f6=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
g7=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
c[0][0]=a1+d4-e5+g7;
c[0][1]=c3+e5;
c[1][0]=b2+d4;
c[1][1]=a1-b2+c3+f6;
printf("\n after multiplication using \n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<2;j++)
printf("%d\t",c[i][j]);
}
return 0;
}