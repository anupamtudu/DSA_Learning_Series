#include <stdio.h>
int main(){
    int a,b,x,y,cost;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    cost= (a*x+b*y);
    printf("%d", cost);
    return 0;
}