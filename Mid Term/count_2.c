#include <stdio.h>
int main() 
{
    char S[1000];
    scanf("%s", S);
  int i;
  int vowel=0;
  for (i = 0; S[i] != '\0'; i++)
     {
        
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') 
        {
           vowel++;
        }
    }
printf("%d",vowel);

    return 0;
}