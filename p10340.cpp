#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    while(cin>>s>>t)
    {
        int ss=s.size();
        int ts=t.size();
        int a=0; bool f;
        if(ts<ss)
            f=false;
        else
        {
            for(int i=0;i<ss;i++)
            {
                for(int j=a;j<ts;j++)
                {
                    if((s[i]==t[j]) && a<ts)
                    {
                        a=j+1;
                        f=true;
                        break;
                    }

                    else
                    {
                        f=false;
                    }
                }
                if(!f)
                    break;
            }
        }
        if(f)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
