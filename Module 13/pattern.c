#include<stdio.h>
int main()
{
 /*int i, n,j,k=1;
scanf("%d",&n);
 for (i=1;i<=n;i++)
 {
     for(j=1;j<=k;j++)
     {
         printf(" * ");
         //k++;
     }
     k++;
 printf("\n");
 }
} */

int i, n,j,k;
scanf("%d",&n);
k=n;
 for (i=1;i<=n;i++)
 {
    for(j=1;j<=k;j++)
     {
        printf(" * ");
         
     }
     k--;
 printf("\n");
 }
return 0;
} 