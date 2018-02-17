#include<stdio.h>
#define ull unsigned long long int
int main(){
    ull x;
    while(scanf("%lld",&x)==1){
        ull r= (x*(x+1))/2;
        printf("%lld\n",r*r);
    }
    return 0;
}
