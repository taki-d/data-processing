#include <stdio.h>
#include <string.h>

int main()
{
    int loop;
    char str1[81] = "The Force will be with you, always.";
    char str2[81];
    loop =-1;

    loop = -1;
    do{
        loop++;
        str2[loop] = str1[loop];
    }while (str1[loop] != '\0');

    printf("%s\n",str1);
    printf("%s\n",str2);

    return 0;
}
