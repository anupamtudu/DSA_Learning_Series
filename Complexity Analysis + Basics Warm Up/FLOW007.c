#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, t, rem, rev=0, temp=0;
    scanf("%d", &t);
    int *n = (int *)malloc(t*sizeof(int));
    for(i=0; i<t; i++){
        scanf("%d", &n[i]);
    }

    while(t<=1000&&t>=1){
        for(i=0; i<t; i++){
            temp=n[i];
            while(temp<=1000000&&temp>=1){
                while(temp!=0){
                    rem = temp%10;
                    rev = rev*10 + rem;
                    temp/=10;
                }
                printf("%d\n", rev);
                temp=0;
                rem=0;
                rev=0;
            }
        }
        break;
    }
    return 0;
}