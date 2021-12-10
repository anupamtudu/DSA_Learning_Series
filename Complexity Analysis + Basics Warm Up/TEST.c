#include <stdio.h>
int main(){
    int n, f=0;

    while(scanf("%d", &n)){
        if(n==42){
            f=1;
        }
        if(f==0){
            printf("%d", n);
        }
    }
    return 0;
}