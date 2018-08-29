#include <stdio.h>

int main()
{
    int num;
    FILE *fp;

    fp = fopen("out.txt","w");

    fprintf(fp,"0 1 2\n");
    fprintf(fp,"ABCD\nXYZ\n");
    num=123;
    fprintf(fp,"%d\n",num);
    fprintf(fp,"あいうえお/n");

    fclose(fp);

    return 0;
}
