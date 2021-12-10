#include <stdio.h>
int main(){
    int t, g;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &g);
        for(int i=0; i<g; i++){
            int c1, n, c2;
            scanf("%d %d %d", &c1, &n, &c2);
            if(n%2==0){
                printf("%d\n", n/2);
            }
            else{
                if(c1==c2){
                    printf("%d\n", n/2);
                }
                else{
                    printf("%d\n", n/2+1);
                }
            }

        }
    }
    return 0;
}

