#include <stdio.h>

int main()
{
    int num;
    FILE *fp;

    fp = fopen("dir1/out.txt","w");
    if(fp == NULL){
        printf("dir1/out.txtが作成できません\n");
    }else{
        printf("ファイルに書き込み成功\n");
        fprintf(fp,"0123456789\n");
        fclose(fp);
    }

    return 0;
}
