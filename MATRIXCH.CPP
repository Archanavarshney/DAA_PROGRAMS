#include<stdio.h>
#include<conio.h>
#define inf 9999
void matrix_chain(int p[11],int n, int M[11][11],int S[11][11])
{
int i,j,k,l,q;
for(l=2;l<=n;l++)
{
for(i=1;i<=n-l+1;i++)
{
j=i+l-1;
M[i][j]=inf;
for(k=i;k<=j-1;k++)
{
q=M[i][k]+M[k+1][j]+p[i-1]*p[k]*p[j];
if(q<M[i][j])
{
M[i][j]=q;
S[i][j]=k;
}
}
}
}
}
void putdata(int A[11][11],int r,int c)
{
int i,j;
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
}
void main()
{
int M[11][11],S[11][11],i,n,j,p[11];
for(i=0;i<=10;i++)
{
for(j=0;j<=10;j++)
{
M[i][j]=0;
S[i][j]=0;
}
p[i]=0;
}
printf("enter total number of matrices:");
scanf("%d",&n);
printf("enter chain of matrix:");
for(i=0;i<=n;i++)
scanf("%d",&p[i]);
matrix_chain(p,n,M,S);
printf("\n output");
putdata(M,n,n);
printf("\n ouput");
putdata(S,n,n);
getch();
}