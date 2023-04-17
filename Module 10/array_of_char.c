#include<stdio.h>
int main()
{
int i, n;
scanf("%d",&n);
int arr[7];
for(i=0;i<7;i++)
{
    scanf("%c",&arr[i]);
}
for(i=0;i<7;i++)
{
    printf("%c",arr[i]);
}
return 0;
}