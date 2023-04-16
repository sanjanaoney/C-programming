#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
 i=0,j=n-1;
while(i<j)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;


}