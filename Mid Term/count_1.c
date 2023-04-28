#include<stdio.h>
int main()
{
int i, N;
scanf("%d",&N);
int A[N];
for(i=0;i<N;i++)
{
    scanf("%d",&A[i]);
}
int even=0;
int odd=0;
for(i=0;i<N;i++)
{
if(A[i]%2==0)
{

    even++;
}
else
{
    odd++;
}
}

printf("%d ",even);
printf("%d ",odd);
return 0;

}