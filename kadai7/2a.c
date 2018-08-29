#include <stdio.h>

int main()
{
    int num,loop;
    FILE *fp;

    fp = fopen("data.txt","w");
    fprintf(fp, "10\n20\n30\n");
    fclose(fp);


    fp = fopen("data.txt","r");
    for(loop = 0; loop < 3; loop++){
        fscanf(fp, "%d", &num);
    }

    fclose(fp);

    return 0;
}
