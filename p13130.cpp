#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int ara[5]; bool f=true;
        for(int i=0;i<5;i++)
        {
            cin>>ara[i];
        }
        for(int i=0;i<4;i++)
        {
            if((ara[i]+1)!=ara[i+1])
                f=false;
        }
        if(f)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
