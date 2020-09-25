#include<stdio.h>
#include<stdlib.h>
static int count=0;
int main()
{
int a[50],n;
void heap_sort(int a[],int);
void bulid_heap(int [],int);
void heapify(int [],int);
void get_data(int [],int);
void put_data(int [],int);
printf("enter the size of an array should be less than 50:\n");
scanf("%d",&n);
printf("enter the array elements:\n");
get_data(a,n);
printf("\n array before sorting\n");
put_data(a,n);
heap_sort(a,n);
printf("\n array after sorting \n");
put_data(a,n);
printf("\n for n=%d count are %d",n,count);
return 0;
}
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
void heapify(int a[],int n,int i)
{
count++;
int largest=i;
count++;
int left=2*i+1;
count++;
int right=2*i+2;
count++;
if(left < n && a[left]>a[largest])
{
count++;
largest=left;
count++;
}
if(right < n && a[right]>a[largest])
{
count++;
largest=right;
count++;
}
if(largest!=i)
{
count++;
swap(&a[i],&a[largest]);
count++;
heapify(a,n,largest);
count++;
}
}
void build_heap(int a[],int n)
{
count++;
int i;
count++;
for(i=(n/2)-1;i>=0;i--)
{
count++;
count++;
heapify(a,n,i);
count++;
}
}
void heap_sort(int a[],int n)
{
int i;
count++;
build_heap(a,n);
count++;
for(i=n-1;i>=0;i--)
{
count++;
count++;
swap(&a[0],&a[i]);
count++;
heapify(a,i,0);
count++;
}
}
void get_data(int a[],int n)
{
int i;
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
