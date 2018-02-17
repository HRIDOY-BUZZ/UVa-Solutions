#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,l;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        int dv=0;
        for(int x=0;x<=l;x++)
        {
            int fx=a*x*x+b*x+c;
            if(fx%d==0)
                dv++;
        }
        cout<<dv<<endl;
    }
    return 0;
}
