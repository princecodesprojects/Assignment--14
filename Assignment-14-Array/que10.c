#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,b[10];
printf("Enter 10 numbers\n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
    b[i]=a[i];
}
for(i=0;i<10;i++)
{
    printf("%d ",b[i]);
}
 
return 0;
}