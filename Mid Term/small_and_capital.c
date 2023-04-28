#include <stdio.h>
int main()
 {
    char S[1001];
    scanf("%s", S);
    int capital_letter = 0, small_letter = 0;
    int i;
    for(i=0; S[i]!='\0'; i++) 
    {
        if(S[i]>='A' && S[i]<='Z')
        {
            capital_letter++;
        }
         else if(S[i]>='a' && S[i]<='z') 
        {
           small_letter++;
        }
    }
    printf("%d %d", capital_letter, small_letter);
    return 0;
}