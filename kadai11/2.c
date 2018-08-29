#include <stdio.h>
#include <string.h>

int main()
{
    char str1[81] = "ABCDEF";
    char str2[81] = "ABcdef";
    char str3[81], str4[81];

    printf("1:[%s]\n",strcpy(str3,str1));
    printf("==%s==%s==\n\n",str3,str2);

    printf("2:[%s]\n",strcat(str3,str2));
    printf("==%s==%s==\n\n",str3,str2);

    strncpy(str4,str1,3);
    str4[3] = '\0';

    printf("==%s==%s==\n\n",str4,str1);
    if(strncmp(str1,str2,2) == 0){
        printf("条件を満たしました\n");
    }else{
        printf("elseになりました\n");
    }

    return 0;
}
