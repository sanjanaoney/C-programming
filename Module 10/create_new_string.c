#include<stdio.h>
#include<string.h>
int main()
{
char S[1001], T[1001];
scanf("%s\n%s",S,T);
int st=strlen(S);
int st1=strlen(T);
printf("%d %d\n",st,st1);
printf("%s %s",S,T);
return 0;
}