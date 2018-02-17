#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    long long army1,army2,c;
    while(scanf("%lld %lld",&army1,&army2)!=EOF){
            c=army1-army2;
        if(c<0){
            c=c*(-1);
        }
        cout<<c<<endl;
    }

    return 0;
}
