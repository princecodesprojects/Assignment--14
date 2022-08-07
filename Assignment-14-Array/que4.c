#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,j;
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
int temp=a[0];
for(i=1;i<10;i++)
{
if(temp<a[i])
temp=a[i];
}
 printf("%d ",temp);
return 0;
}