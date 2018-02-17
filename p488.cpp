#include<bits/stdc++.h>
using namespace std;

void wave(int a)
{
        for(int i=1; i<=a;i++)
        {

            for(int j=1;j<=i;j++)
            {
                cout<<i;
            }
            cout<<endl;
        }
        for(int i=a-1; i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<i;
            }
            cout<<endl;
        }
}

int main()
{
    int c;
    cin>>c;
    for(int i=1;i<=c;i++)
    {
        if(i>1)
            cout<<endl;
        int a,f;
        cin>>a>>f;
        for(int t=1;t<=f;t++)
        {
            if(t>1)
                cout<<endl;
            wave(a);
        }
    }
    return 0;
}
