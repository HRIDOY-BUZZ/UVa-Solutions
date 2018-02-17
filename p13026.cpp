#include<bits/stdc++.h>
using namespace std;

int main()
{
    string jalil, dad[1002];
    int T,N,s,c; cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>N;
        for(int n=0;n<N;n++)
        {
            cin>>dad[n];
        }
        cin>>jalil;
        s=jalil.size();
        cout<<"Case "<<t<<":"<<endl;
        for(int n=0;n<N;n++)
        {
            c=0;
            for(int i=0;i<s;i++)
            {
                if(dad[n][i] == jalil[i])
                    c++;
            }
            if((c+1)==s || c==s)
            {
                cout<<dad[n]<<endl;
            }
        }
    }
    return 0;
}
