#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, n;
    scanf("%d", &n);

    while(n>=1&&n<=200){
        for(i=0; i<n; i++){
            if(i%2==0){
                for(j=0; j<5; j++){
                    printf("%d ", (i/2*10)+j+1);
                }
            }
            else{
                for(j=0; j<5; j++){
                    printf("%d ", ((i-i/2)*10)-j);
                }
            }
            printf("\n");
        }
        break;
    }
}