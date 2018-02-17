#include<bits/stdc++.h>
using namespace std;

int GCD(int x,int y)
{
    if(y==0)
        return x;
    else
        GCD(y,(x%y));
}

int main()
{
    for(;;)
    {
        int N; cin>>N;
        if(N==0)
            break;
        int G=0;
        for(int i=1;i<N;i++)
            for(int j=i+1;j<=N;j++)
            {
                G+=GCD(j,i);
            }
        cout<<G<<endl;
    }
    return 0;
}
