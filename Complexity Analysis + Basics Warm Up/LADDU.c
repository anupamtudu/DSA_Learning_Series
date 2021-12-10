#include <stdio.h>
int main(){
    int n, r, t, b;
    char st[20];
    char s[20];
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        int l=0;
        scanf("%d %s", &n, &st);
        for(int i=0; i<n; i++){
            scanf("%s", &s);
            if(s[0]=='C'&&s[8]=='W'){
                scanf("%d", &r);
                if(r<20){
                    l = l+300+(20-r);
                }
                else{
                    l=l+300;
                }
            }
            else if(s[0]=='T'&&s[4]=='C'){
                l=l+300;
            }
            else if(s[0]=='B'&&s[4]=='F'){
                scanf("%d", &b);
                l=l+b;
            }
            else if(s[0]=='C'&&s[8]=='H'){
                l=l+50;
            }
        }
        if(st[0]=='I'){
            int m = l/200;
            printf("%d\n", m);
        }
        else if(st[0]=='N'&&st[4]=='I'){
            int m = l/400;
            printf("%d\n", m);
        }
    }
}