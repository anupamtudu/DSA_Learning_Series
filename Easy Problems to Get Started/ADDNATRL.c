#include <stdio.h>
int main(){
    long int i, n, sum;
    scanf("%ld", &n);

    sum = (n*(n+1))/2;
    printf("%ld", sum);
    return 0;
}