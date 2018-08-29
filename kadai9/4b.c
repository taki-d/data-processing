#include <stdio.h>
#include <string.h>

int main()
{
    char instr[81], ans[81] = "Yes";

    do{
        printf("Yesと入力してください\n");
        scanf("%s",instr);
    }while(strcmp(instr,ans) != 0);

    printf("Thank you!");

    return 0;
}
