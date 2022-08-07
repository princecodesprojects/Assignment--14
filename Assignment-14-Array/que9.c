#include<stdio.h>
#include<conio.h>
int main()
{
     int n,i;

    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers of the array\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=4;i>=0;i--)
    {
    printf("%d ",a[i]);
    }
    getch();
    return 0;
}
