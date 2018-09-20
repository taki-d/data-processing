// 4D07 木下 嵩裕

// 問題1
#include <stdio.h>

int main()
{
    printf("数字を3つ連続して入力しなさい:");
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    int result = a * b - 7 * c;

    printf("式1の結果は:%d\n",result);

    FILE *file;
    file = fopen("file1.txt","w");
    fprintf(file,"式1の結果は:%d\n",result);

    return 0;
}

/*
// 問題2
#include <stdio.h>

int main(){
    int a,b;

    printf("1番めの数字を一つ入力しなさい:");
    scanf("%d",&a);

    printf("2番めの数字を一つ入力しなさい:");
    scanf("%d",&b);

    if(a > b){
        printf("1番目の数字が%d大きい\n",a - b);
    }else if(a < b){
        FILE *file;
        file = fopen("file2.txt","w");
        fprintf(file,"2番目の数字が%d大きい\n",b - a);
        fclose(file);
    }else if(a == b){
        FILE *file;
        file = fopen("file2.txt","w");
        fprintf(file,"同じ数字です!\n");
        fclose(file);
    }

    return 0;
}
*/
/*
// 問題3
#include <stdio.h>

int main(){
    int a,b,c,d;
    int count = 0;

    printf("整数を4つを入力:");


    scanf("%d %d %d %d",&a,&b,&c,&d);

    while (!(a==0 && b==9 && c==1 && d == 0)){
        int result = a * b * c * d;

        printf("演算結果:%d\n",result);
        ++count;

        printf("整数を4つを入力:");
        scanf("%d %d %d %d",&a,&b,&c,&d);
    }

    printf("全部%d回の演算をしました．\n",count);


    return 0;
}
*/
