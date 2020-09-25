#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int count=0;
int main()
{
void get_data(int [],int);
void put_data(int [],int);
void select_sort(int [],int);
int a[50],n;
printf("enter the number");
scanf("%d",&n);
get_data(a,n);
printf("\n before sorting \n");
put_data(a,n);
select_sort(a,n);
printf("\n after sorting \n");
put_data(a,n);
printf("\n for n=%d number of counts=%d",n,count);
return 0;
}
void get_data(int a[],int n)
{
int i;
printf("enter the values of an array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void put_data(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void select_sort(int a[],int n)
{
int i,j,t;
int min;
count++;
for(i=0;i<n-1;i++)
{
count++;
min=i;
count++;
for(j=1;j<n;j++)
{
if(a[min])
{
min=j;
}
}
}
count++;
t=a[min];
count++;
a[min]=a[i-1];
count++;
a[i]=t;
count++;
}
