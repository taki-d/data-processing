#include <stdio.h>

int main()
{
    int num,loop;
    double dnum;
    FILE *fp;

    fp = fopen("data.txt","w");
    fprintf(fp, "10\n20\n30\n");
    fprintf(fp, "1.4\n2.3\n5.9\n");
    fclose(fp);


    fp = fopen("data.txt","r");
    for(loop = 0; loop < 3; loop++){
        fscanf(fp, "%d", &num);
        printf("%d番目: %d\n",loop+1,num);
    }
    for(loop = 0; loop < 3; loop++){
        fscanf(fp, "%lf", &dnum);
        printf("%d番目: %f\n",loop+1,dnum);
    }
    fclose(fp);

    return 0;
}
