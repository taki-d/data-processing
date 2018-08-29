#include <stdio.h>
#include <string.h>

int main()
{
    int loop;
    int flag;
    char instr[81], ans[81] = "Yes";

    do{
        printf("Yesと入力してください\n");
        scanf("%s",instr);
        flag = 1;

        for (loop = 0; loop < strlen(ans); ++loop) {
            if(instr[loop] != ans[loop]){
                flag = flag * 0;
            }
        }
    }while(flag == 0);

    printf("Thank you!");

    return 0;
}
