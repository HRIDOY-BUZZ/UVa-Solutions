#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        string a,b,c;
        cin>>a>>b;
        int as = a.size();
        int bs = b.size();
        int n;
        if(as>bs)
        {
            n = as;
            for(int i=bs;i<n;i++)
                b.append("0");
        }
        else
        {
            n = bs;
            for(int i=as;i<n;i++)
                a.append("0");
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int crr = 0;
        for(int i=n-1;i>=0;i--)
        {
            char ad;
            int fst,lst,rs;
            fst = a[i] - '0';
            lst = b[i] - '0';
            rs = fst + lst + crr;
            if(rs>9)
            {
                crr = rs/10;
                rs = rs%10;
            }
            else
            {
                crr = 0;
            }
            ad = rs + '0';
            c += ad;
        }
        bool f = false;
        for(int i=0;i<n;i++)
        {
            if(!f)
            {
                if(c[i]=='0')
                    continue;
                else
                    f = true;
            }
            cout<<c[i];
        }
        if(crr>0)
        {
            cout<<crr;
        }
        cout<<endl;

    }
    return 0;
}
