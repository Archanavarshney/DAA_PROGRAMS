#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h> >
#include<stdlib.h >
#include<time.h>
int count=0;
int partition(int [],int,int);
void quick_sort(int [],int,int);
void main()
{
void getdata(int [50],int);
void putdata(int [50],int);
int i,a[50],n;
clrscr();
printf("enter the value of n\n");
scanf("%d",&n);
getdata(a,n);
printf("\nbefore sorting\n");
putdata(a,n);
quick_sort(a,0,n-1);
printf("\nafter sorting");
putdata(a,n);
printf("\n for n=%d value of count is %d",n,count);
getch();
}
void getdata(int a[50],int n)
{
int k;
printf("enter the value for sorting\n");
for(k=0;k<n;k++)
{
scanf("%d",&a[k]);
}
}
void putdata(int a[50],int n)
{
int k;
for(k=0;k<n;k++)
{
printf("%d\t",a[k]);
}
printf("\n");
}
void quick_sort(int a[],int p,int r)
{
count++;
if(p<r)
{
int q=partition(a,p,r);
count++;
quick_sort(a,p,q-1);
count++;
quick_sort(a,q+1,r);
count++;
}
count++;
}
int myrandom(int lower,int upper)
{
 int num; srand(time(0));
 num=(rand() % (upper - lower + 1)) + lower;
 return num;
}
int partition(int a[],int p,int r)
{
int pivot,y,i,j,t;
y=myrandom(p,r-1);
 t=a[y];
 a[y]=a[r];
  a[r]=t;
pivot=a[r];
i=(p-1);
count++;
for(j=p;j<=r-1;j++)
{
count++;
if(a[j]<pivot)
{
count++;
i++;
count++;
t=a[i];
count++;
a[i]=a[j];
count++;
a[j]=t;
count++;
}
count++;
}
count++;
t=a[i+1];
count++;
a[i+1]=a[r];
count++;
a[r]=t;
count++;
return(i+1);
}
