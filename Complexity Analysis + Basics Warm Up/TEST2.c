#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n!=42&&n<100){
        printf("%d\n", n);
        return main();
    }
    return 0;
}