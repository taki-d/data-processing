#include <stdio.h>
#include <string.h>

int main()
{
    int loop;
    char str1[81] = "The Force will be with you, always.";
    char str2[81];
    loop =-1;

    strcpy(str2, str1);

    printf("%s\n",str1);
    printf("%s\n",str2);

    return 0;
}
