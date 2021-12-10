#include <stdio.h>
#include <stdlib.h>
int func(int a);
int main(){
    int i, t, n, res;
    scanf("%d", &t);

    for(i=0; i<t; i++){
        scanf("%d", &n);
        res = func(n);
    }
    printf("%d", res);
    
    return 0;
    
}

int func(int a){
    int i, j, *arr, c=1;
    arr = (int*)malloc(a*sizeof(int));
    for(i=0; i<a; i++){
        scanf("%d", &arr);
    }
    
    for(i=0; i<a-1; i++){
        for(j=0; j=a-i-1; j++){
            if(arr[j]>arr[j+1]){
                c++;
            }
        }
    }
    return c;

}