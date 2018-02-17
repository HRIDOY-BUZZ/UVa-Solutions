#include<bits/stdc++.h>
using namespace std;

int divisors(int a)
{
    int i,c=0;
    for(i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
            c++;
    }
    i--;
    if(i==sqrt(a))
        return c*2-1;
    else return c*2;
}

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int m,n,d,c=0,num;
        cin>>m>>n;
        for(int i=m;i<=n;i++)
        {
            d=divisors(i);
            if(d>c)
            {
                c=d;
                num=i;
            }
        }
        cout<<"Between "<<m<<" and "<<n<<", "<<num<<" has a maximum of "<<c<<" divisors."<<endl;
    }
    return 0;
}
