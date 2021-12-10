#include <stdio.h>
int main(){
    int i,arr[3], lar, sec, st;
    
    for(i=0; i<3; i++){
        scanf("%d", &arr[i]);
    }

    if (arr[0]>arr[1]){
        lar = arr[0];
        sec = arr[1];
    }
    else{
        lar = arr[1];
        sec = arr[0];
    }

    for(st=2; st<3; st++){
        if(lar<arr[st]){
            sec = lar;
            lar = arr[st];
        }
        else if(sec<arr[st])
        sec = arr[st];
    }
    printf("%d", sec);
    return 0;
}