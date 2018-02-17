#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        string a;
        cin>>a;
        int dg,x=0;
        int len=a.size();
        cout<<"Case "<<t<<": ";
        for(int i=0;i<len;i++)
        {
            if(isdigit(a[i]))
            {
                dg=a[i]-'0';
                if(isdigit(a[i+1]))
                {
                    int t=a[i+1]-'0';
                    dg=(dg*10)+t;
                    if(isdigit(a[i+2]))
                    {
                        t=a[i+2]-'0';
                        dg=(dg*10)+t;
                    }
                }


                for(int j=1;j<=dg;j++)
                {
                    cout<<a[i-1];
                }
                if(dg>99)
                    i+=2;
                else if(dg>9)
                    i++;
            }
        }
        cout<<endl;
    }

    return 0;
}
