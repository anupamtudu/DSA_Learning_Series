#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i, t;
    scanf("%d", &t);

    while(t<=100&&t>=1){
        while(t--){
            char s[1000];
            scanf("%s", s);
            int left[26] = {0};
            int right[26] = {0};
            int len = strlen(s);
            while(len<=1000&&len>=2){
                for(i=0; i<len/2; i++){
                    int index = s[i] - 'a';
                    left[index]++;
                }

                for(i=(len+1)/2; i<len; i++){
                    int index = s[i] - 'a';
                    right[index]++;
                }
                
                int c = 0;
                for(i=0; i<26; i++){
                    if(left[i]!=right[i])
                    c=1;
                }
                if(c==0)
                printf("YES\n");
                else
                printf("NO\n");
                break;
            }
            break;
        }
    }
    return 0;
}