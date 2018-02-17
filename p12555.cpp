#include<bits/stdc++.h>
using namespace std;

int T;
string str,a,b;

int main()
{
    cin>>T;
    cin.ignore(100,'\n');
    for(int t=1;t<=T;t++)
    {
        a=""; b="";
        getline(cin,str);
        int s=str.size();
        bool flag=true;
        int x;
        for(int i=0;i<s;i++)
        {
            if(isdigit(str[i]) && flag)
                a+=str[i];
            else if(str[i]=='.')
                a+=str[i];
            else if(!isdigit(str[i]))
            {
                flag=false;
                x=i;
                break;
            }
        }
        for(int i=x; i<str.length(); i++)
        {
            if(isdigit(str[i]))
                b+=str[i];
            else if(str[i]=='.')
                b+=str[i];
        }
        double y,z;

        istringstream yss (a);
        yss>>y;

        if(b.size()>0)
        {
            istringstream zss (b);
            zss>>z;
        }
        else
            z=0;

        double kg=(y*0.5)+(z*0.05);

        cout<<"Case "<<t<<": "<<kg<<endl;
    }
    return 0;
}
