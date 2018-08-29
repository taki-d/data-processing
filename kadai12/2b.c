#include <stdio.h>

int main()
{
    int num[4];
    int loop;
    double dnum[4];

    for(loop = 0; loop < 4; loop++){
        num[loop] = (loop + 1) * 100;
        dnum[loop] = 100. / (loop + 1);
    }

    for(loop = 0; loop < 4; loop++){
        printf("%d-%f\n",num[loop],dnum[loop]);
    }

    return 0;
}
