#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
using namespace std;

int main()
{
    ll n,s,r;
    while(cin>>n && n!=0)
    {
        s=sqrt(n);
        r=s*s;
        if(r==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
