#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        int z=0;
        while(n/5!=0){
            n=n/5;
            z = z+n;
        }
        printf("%d\n", z);
    }
    return 0;
}