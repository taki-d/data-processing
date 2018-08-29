#include <stdio.h>
#include <string.h>

int main()
{
    char line[81], str[81];
    int num;
    FILE *fp;

    printf("一行で英単語一つと数字を書いてください:");
    gets(line);
    sscanf(line, "%s %d", str, &num);
    printf("単語は%s\n", str);
    printf("数字は%d\n", num);

    for (int num = 0; num < 5; ++num) {
        sprintf(str, "d%d.txt", num);
        fp = fopen(str, "w");
        printf("Create File: %s\n", str);
        fclose(fp);
    }


    return 0;
}
