#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int ara[4];
        for(int i=0;i<4;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+4);
        string str;
        if(ara[0]==ara[1] && ara[1]==ara[2] && ara[2]==ara[3])
            str="square";
        else if(ara[0]==ara[1] && ara[2]==ara[3])
            str="rectangle";
        else if(ara[0]+ara[1]+ara[2]>ara[3])
            str="quadrangle";
        else
            str="banana";
        cout<<str<<endl;
    }
    return 0;
}
