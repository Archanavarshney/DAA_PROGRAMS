#include<stdio.h>
#include<conio.h>
#include<string.h>
void lcs(char X[], char Y[])
{
int i,j,m,n;
int c[51][51];
char b[51][51];
m=strlen(X);
n=strlen(Y);
for(i=1;i<=m;i++)
c[i][0]=0;
for(j=0;j<=n;j++)
c[0][j]=0;
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
if(X[i-1]==Y[j-1])
{
c[i][j]=c[i-1][j-1]+1;
b[i][j]=92;
}
else if(c[i-1][j]>=c[i][j-1])
{
c[i][j]=c[i-1][j];
b[i][j]=24;
}
else
{
c[i][j]=c[i][j-1];
b[i][j]=60;
}
}
}
for(i=0;i<=m;i++)
{
for(j=0;j<=n;j++)
{
printf(" %d",c[i][j]);
}
printf("\n");
}
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
printf(" %c",b[i][j]);
}
printf("\n");
}
}
void main()
{
int i,j,m,n;
char X[50];
char Y[50];
int c[51][51];
char b[51][51];
printf("enter fisrt string");
scanf("%s",X);
printf("enter second string");
scanf("%s",Y);
lcs(X,Y);
getch();
}