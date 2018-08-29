#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("out.txt","a");

    fprintf(fp,"Hello\n");

    fclose(fp);

    return 0;
}
