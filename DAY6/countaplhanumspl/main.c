#include <string.h>

int main()
{
    char s[1000];
    int i,alpha=0,digits=0,schar=0;

    printf("Enter  the string : ");
    gets(s);

    for(i=0;s[i];i++)
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          alpha++;
        else if(s[i]>=48 && s[i]<=57)
         digits++;
        else
         schar++;

 	}


    printf("Alphabets = %d\n",alpha);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", schar);


    return 0;
}
