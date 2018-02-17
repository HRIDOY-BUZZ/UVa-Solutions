#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        string str; cin>>str;
        int s=str.size();
        int c=0,sum=0;;
        for(int i=0;i<s;i++)
        {
            if(str[i]=='O')
            {
                c++;
                sum+=c;
            }
            else if(str[i]=='X')
            {
                c=0;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
