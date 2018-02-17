#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int c=1,t=1;
        while(t%n)
        {
            t%=n;
            t=(t*10)+1;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
