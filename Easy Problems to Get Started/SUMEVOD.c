#include <stdio.h>
int main(){
    long n, sumev, sumod;
    scanf("%ld", &n);
    while(n<=1000000 && n>=1){
        sumod = n*n;
        sumev = n*(n+1);
        printf("%ld %ld", sumod, sumev);
        break;
    }
    return 0;
}