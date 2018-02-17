#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int x,y,z; cin>>x>>y>>z;
        x*=60; y*=60;
        int h=(x+y)/3;
        int A=x-h;
        int D;
        if(A<0)
            D=0;
        else
            D=(z*A)/h;
        cout<<D<<endl;
    }
    return 0;
}
