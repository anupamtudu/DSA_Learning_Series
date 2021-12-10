#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    while(1<=a<=1000&&1<=b<=1000&&1<=c<=1000){
        int cl1 = (a+b>c);
        int cl2 = (a+c>b);
        int cl3 = (b+c>a);

        if((a==b&&b==c&&c==a)&&cl1&&cl2&&cl3){
            printf("1");
        }
        else if((a!=b&&b!=c&&c!=a)&&cl1&&cl2&&cl3){
            printf("3");
        }
        else if(((a==b&&a!=c)||(b==c&&b!=a)||(c==a&&c!=b))&&cl1&&cl2&&cl3){
            printf("2");
        }
        else{
            printf("-1");
        }
        break;
    }
    return 0;
}