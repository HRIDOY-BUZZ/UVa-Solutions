#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long int m,n,r;
        cin>>n>>m;

        r=((m-n)*n)+(n*(n-1)/2);

        cout<<r<<endl;
    }
    return 0;
}
