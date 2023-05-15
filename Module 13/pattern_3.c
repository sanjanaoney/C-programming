#include<stdio.h>
int main()
{
int i,n,j,k;
scanf("%d",&n);
//k=1
 /* for(i=1;i<=n;i++)
{
    for(j=1;j<=k;j++)
    {
        printf("%d ",j);
    }
    k++;
    printf("\n");
} */
k=n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=k;j++)
    {
        printf("%d ",j);
    }
    k--;
    printf("\n");
} 
return 0;
}