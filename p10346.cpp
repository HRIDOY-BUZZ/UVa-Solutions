#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
    lld n,k,a,b,c;
    while(cin>>n>>k)
    {
        c=n;
        while(n>=k)
        {
            a=n/k;
            c+=a;
            a+=n%k;
            n=a;
        }
        cout<<c<<endl;

    }
    return 0;
}
