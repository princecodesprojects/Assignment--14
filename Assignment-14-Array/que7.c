#include<stdio.h>
#include<conio.h>
// int main()
// {
// int a[10],i,j,temp;
// printf("Enter 10 numbers\n");
// for(i=0;i<10;i++)
// {
//     scanf("%d",&a[i]);
// }
// for(i=0;i<10;i++)
// {
//    for(j=i+1;j<10;j++)
//    {
//      if(a[i]>a[j])
//      {
//         temp=a[i];
//         a[i]=a[j];
//         a[j]=temp;
//      }
//    }
// }

//    printf("%d ",a[8]);
 
// return 0;
// }

int main()
{
   int a[10],i,largest,s_largest;
   printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
     {
       scanf("%d",&a[i]);
     }

     largest=a[0];

     for(i=1;i<10;i++)
     {
      if(largest<a[i])
      {
         s_largest=largest;
         largest=a[i];
      }
      else if(s_largest<a[i])
      {
         s_largest=a[i];
      }
     }
     printf("Second largets element is %d",s_largest);
}