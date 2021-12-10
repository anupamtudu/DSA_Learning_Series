#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int cl1 = a+b>c;
    int cl2 = a+c>b;
    int cl3 = b+c>a;
    if((cl1||cl3||cl2)&&a+b+c==180&&a>0&&b>0&&c>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}