#include <iostream>
using namespace std;

int func(int a);
int main(){
    int t, n, res;
    cin>>t;

    while(t<=100&&t>=1){
        for(int i=0; i<t; i++){
            cin>>n;
            while(n>=1&&n<=10000){
                res = func(n);
                cout<<res<<endl;
                break;
            }
        }
        break;
    }
    return 0;
}

int func(int a){
    int arr[10000], c=1;
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    if(a==1){
        return c;
    }
    else if(a==0){
        return 0;
    }

    for(int i=0; i<a-1; i++){
        for(int j=0; j<a-i-1; j++){
            if(arr[j]>arr[j+1]){
                c++;
                return c;
            }
        }
    }
    c=1;

}