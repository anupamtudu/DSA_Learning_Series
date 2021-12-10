#include <stdio.h>
int main(){
    int a, b, c, cl1, cl2, cl3;
    scanf("%d %d %d", &a, &b, &c);
    cl1 = (a+b>c);
    cl2 = (a+c>b);
    cl3 = (b+c>a);

    if(cl1 && cl2 && cl3){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}