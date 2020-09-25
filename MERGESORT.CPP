#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>
int count=0;
void merge(int [],int,int,int);
void merge_sort(int [],int,int);
void main()
{
void getdata(int[50],int);
void putdata(int[50],int);
int i,a[50],n;
clrscr();
printf("enter the value of n\n");
scanf("%d",&n);
getdata(a,n);
printf("\n before sorting\n");
putdata(a,n);
merge_sort(a,1,n);
printf("\n after sorting\n");
putdata(a,n);
printf("\n for n = %d value of count is %d",n,count);
getch();
}
void getdata(int x[50],int n)
{
 int k;
 printf("enter the value for sorting\n");
 for(k=1;k<=n;k++)
 {
 scanf("%d",&x[k]);
 }
}
void putdata(int x[50], int n)
{
int k;
for(k=1;k<=n;k++)
{
 printf("%d\t",x[k]);
 }
 printf("\n");
}
void merge_sort(int a[50],int p,int r)
{
int q;
if(p<r)
{
q=(p+r)/2;
merge_sort(a,p,q);
merge_sort(a,q+1,r);
merge(a,p,q,r);
}
}
void merge(int a[],int p,int q,int r)
{
int i,j,k;
int n1=q-p+1;
int n2=r-q;
int l[50],r1[50];
count++;
for(i=1;i<=n1;i++)
{
count++;
l[i]=a[p+i-1];
for(j=1;j<=n2;j++)
{
count++;
r1[j]=a[q+j];
l[n1+1]=999;
r1[n2+1]=999;
count++;
i=1;
count++;
j=1;
count++;
for(k=p;k<r;k++)
{
if(l[i]<=r1[j])
{
a[k]=l[i];
i++;
}
else
a[k]=r1[j];
j++;
count++;
}
count++;
}
count++;
}
}
