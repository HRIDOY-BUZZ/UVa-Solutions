#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c,x;
        cin>>a>>b>>c;

        if(a>b && a>c)
        {
            if(b>c)
                x=b;
            else
                x=c;
        }
        else if(b>a && b>c)
        {
            if(a>c)
                x=a;
            else
                x=c;
        }
        else
        {
            if(a>b)
                x=a;
            else
                x=b;
        }
        cout<<"Case "<<i<<": "<<x<<endl;
    }
    return 0;
}
