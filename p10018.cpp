#include<iostream>
using namespace std;

long long Reverse(long long n){
    long long r=0;
    while(n){
        long long t=n%10;
        r=r*10+t;
        n/=10;
    }
    return r;
}

int main(){
    int num;
    cin>>num;
        while(num--){
            long long a,c,n,r=0,counter=0;
                cin>>a;
                    n=a;
            for( ; ; ){
                long long r=Reverse(n);

                if(n==r){
                    break;
                }
                else{
                    c=n+r;
                    counter++;
                    n=c;
                }
            }
            cout<<counter<<" "<<c<<endl;
        }
    return 0;
}
