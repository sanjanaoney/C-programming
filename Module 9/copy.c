#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int m;
scanf("%d",&m);
int b[m];
for(i=0;i<m;i++)
{
    scanf("%d",&b[i]);
}
int ans[n+m];
for(i=0;i<n;i++)
{
    ans[i]=a[i];
}
int j;
i=n;
for(j=0;j<m;j++)
{
ans[i]=b[j];
i++;
}
for(i=0;i<n+m;i++)
{
    printf("%d ",ans[i]);
}
return 0;
}