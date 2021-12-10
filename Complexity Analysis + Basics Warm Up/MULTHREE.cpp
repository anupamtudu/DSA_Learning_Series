#include <iostream>
using namespace std;
int main(){
    long long int t;
    long long int s, sd;
    cin>>t;

    for(int i=0; i<t; i++){
        long long int k;
        long long int d0, d1, d2;
        cin>>k>>d0>>d1;

        if(k==2){
            sd = d0+d1;
        }

        else if(k==3){
            d2 = (d0+d1)%10;
            sd = d0+d1+d2;
        }
        
        else{
            s = (2*(d0+d1))%10+(4*(d0+d1))%10+(8*(d0+d1))%10+(6*(d0+d1))%10;
            d2 = (d0+d1)%10;
            long long int rem;
            rem = (k-3)%4;
            sd = d0+d1+d2+s*((k-3)/4);

            if (rem!=0){
                for(int i=0; i<rem; i++){
                    if (i==0){
                        sd+=(2*(d0+d1))%10;
                    }
                    else if(i==1){
                        sd+=(4*(d0+d1))%10;
                    }
                    else if(i==2){
                        sd+=(8*(d0+d1))%10;
                    }
                    else if(i==3){
                        sd+=(6*(d0+d1))%10;
                    }
                }
            }
        }
        if(sd%3==0){
            cout<<"YES"<<endl;;
        }
        else{
            cout<<"NO"<<endl;;
        }
    }
}
