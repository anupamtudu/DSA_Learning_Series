#include <stdio.h>
#include <stdlib.h>


int main(){
    long long i, j, n, temp=0, amt=0, res;;
    scanf("%lld", &n);
    long long *arr = (long long*)malloc(n*sizeof(long long));
    for(i=0; i<n; i++){
        scanf("%lld", &arr[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    while(n>=1&&n<=500000){
        for(i=0; i<n; i++){
            while(arr[i]>=1&&arr[i]<=100000000){
                res = arr[i]*(n-i);
                
                if (res>=amt){
                    amt = res;
                }
                break;
            }
        }
        break;
    }

    printf("%d", amt);
    return 0;
}