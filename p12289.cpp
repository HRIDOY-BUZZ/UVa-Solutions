#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        string num; cin>>num;
        int s = num.length();

        if(s==5)
            cout<<"3"<<endl;
        else if(s==3)
        {
            if((num[0]=='o' && num[1]=='n') || (num[0]=='o' && num[2]=='e') || (num[1]=='n' && num[2]=='e'))
               cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
    }
    return 0;
}
