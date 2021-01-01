#include<stdio.h>
#include<conio.h>
int count=0;
void main()
{
void toh(int,char,char,char);
int num;
clrscr();
printf("enter the number of disks:");
scanf("%d",&num);
toh(num,'A','B','C');
printf("count value is=%d",count);
getch();
}
void toh(int num , char A , char B , char C)
{
if(num==1)
{
printf("\n moves disk 1 from A %c to B %c",A,B);
}
else
{
toh(num-1,A,C,B);
count++;
printf("\ n move disk %d from A %c to B %c",num,A,B);
count++;
toh(num-1,C,B,A);
count++;
}
}