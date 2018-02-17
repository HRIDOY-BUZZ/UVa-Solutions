#include<bits/stdc++.h>
using namespace std;

string pizza;

int main()
{
    int s;
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int c[6]={0};
        cin>>pizza; s=pizza.size();
        for(int i=0;i<s;i++)
        {
            if(pizza[i]=='M')
                c[0]++;
            else if(pizza[i]=='A')
                c[1]++;
            else if(pizza[i]=='R')
                c[2]++;
            else if(pizza[i]=='G')
                c[3]++;
            else if(pizza[i]=='I')
                c[4]++;
            else if(pizza[i]=='T')
                c[5]++;
        }
        c[1]/=3; c[2]/=2;
        sort(c,c+6);
        cout<<c[0]<<endl;
    }
    return 0;
}
