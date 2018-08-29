#include <stdio.h>

int main()
{
    int count;
    FILE *fp;

    if((fp = fopen("log.txt","r")) == NULL){
        count = 0;
    }else{
        fscanf(fp,"%d",&count);
        fclose(fp);
    }

    if((fp = fopen("log.txt","w")) == NULL){
        printf("Error\n");
        return -1;
    }

    count++;
    printf("%d回目のプログラム実行です\n",count);
    fprintf(fp,"%d",count);
    fclose(fp);

    return 0;
}
