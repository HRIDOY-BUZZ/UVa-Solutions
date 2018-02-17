#include<bits/stdc++.h>
using namespace std;

string str;
int T,s;

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>str;
        s=str.size();
        if(str=="1" || str=="4" || str=="78")
          cout<<"+"<<endl;
        else if(s>1 && str[s-2]=='3' && str[s-1]=='5')
          cout<<"-"<<endl;
        else if(str[0]=='9' && str[s-1]=='4')
          cout<<"*"<<endl;
        else if(s>2 && str[0]=='1' && str[1]=='9' && str[2]=='0')
          cout<<"?"<<endl;
    }
    return 0;
}
