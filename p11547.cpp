#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
    int T; cin>>T;
    while(T--)
    {
        lld n; string str;
        cin>>n;
        n*=567; n/=9; n+=7492; n*=235; n/=47; n-=498;
        stringstream sss;
        sss<<n;
        sss>>str;
        int s=str.size();
        cout<<str[s-2]<<endl;
    }

    return 0;
}
