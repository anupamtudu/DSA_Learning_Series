#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, n;
    scanf("%d", &n);

    while(n<=200 && n>=1){
        for(i=n; i>=1; i--){
            for(j=i; j<=n; j++){
                printf("*");
            }
            printf("\n");
        }
        break;
    }
    return 0;
}