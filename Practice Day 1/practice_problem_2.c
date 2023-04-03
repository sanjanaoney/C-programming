#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d",&a, &b);
    char plus= '+',minus='-',multiple='*', division='/';
    int sum=a+b;
    int sub=a-b;
    int multi=a*b;
    float div=a*1.0/b;
    printf("%d %c %d=%d\n",a,plus,b,sum );
    printf("%d %c %d=%d\n",a,minus,b,sub );
    printf("%d %c %d=%d\n",a,multiple,b,multi );
    printf("%d %c %d=%.2f\n",a,division,b,div );
    return 0;


}