#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    for(ll t=1;t!=0;t++)
    {
        ll a,b,c,i;
        cin>>a>>b;
        if(a<0 && b<0)
            break;
        c=a;
        for(i=1;i!=0;i++)
        {
            if(c==1)
                break;
            else if(c%2==0)
                c/=2;
            else
                c=(3*c)+1;
            if(c>b)
                break;
        }
        cout<<"Case "<<t<<": "<<"A = "<<a<<", limit = "<<b<<", number of terms = "<<i<<endl;
    }
    return 0;
}
