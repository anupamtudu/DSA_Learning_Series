#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, k, i, c=0;
    scanf("%d %d", &n, &k);
    
    int *arr = (int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if (arr[i]==k){
            c++;
        }
    }
    if (c>=1){
            printf("1");
        }
        else{
            printf("-1");
        }
    return 0;
}