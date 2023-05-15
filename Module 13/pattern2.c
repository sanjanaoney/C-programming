#include<stdio.h>
int main()
{
int i,n,j,s,k;
scanf("%d",&n);
/* s=n-1;
k=1;
for(i=1;i<=n;i++)
{
for(j=1;j<=s;j++)
{
    printf(" ");
}
for(j=1;j<=k;j++)
{
    printf("*");
}
s--;
k=k+2;
printf("\n");
} */
 s=0;
k=2*n-1;

for(i=1;i<=n;i++)
{
    for(j=1;j<=s;j++)
    {
        printf(" ");
    }
    for(j=1;j<=k;j++)
    {
        printf("*");
    }
    s++;
    k=k-2;
    printf("\n");
} 
return 0;
}