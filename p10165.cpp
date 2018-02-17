#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,r;
    while(cin>>n)
    {
        if(n==0)
            break;
        int r=0;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            r^=x;
        }
        if(r)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
