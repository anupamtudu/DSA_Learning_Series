#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, c=0;
        cin>>n;
        int *arr= new int(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int s1=arr[0];

        for(int i=0; i<n; i++){
            if(s1>=arr[i]){
                c++;
                s1=arr[i];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}