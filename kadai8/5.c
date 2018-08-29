#include <stdio.h>

int main()
{
    FILE *fp;
    char str[81];

    printf("文字列入力:");
    scanf("%s",str);

    printf("書込み中\n");
    fp = fopen("AAA.txt","w");
    fprintf(fp,"%d\n",100);
    fprintf(fp,"%s\n",str);
    fputs("END END END\n",fp);
    fclose(fp);
    printf("書込み完了");

    printf("\n--------\n");
    fp = fopen("AAA.txt","r");
    while (fscanf(fp,"%s",str) != EOF) {
        puts(str);
    }
    fclose(fp);

    printf("\n--------\n");

    fp = fopen("AAA.txt","r");
    while (fgets(str,80,fp) != NULL) {
        puts(str);
    }
    fclose(fp);

    printf("\n--------\n");

    return 0;
}
