#include "stdio.h"

int main(){
    FILE *file = fopen("output.txt", "w");
    fprintf(file,"%d\n",NULL);


    return 0;

}
