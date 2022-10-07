#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[25] = "My Name is Zarak Jahan\n";
    FILE *f; //file pointer
    f = fopen("textfile.txt", "w");
    fputs(s,f);
    fclose(f);

    return 0;
}
