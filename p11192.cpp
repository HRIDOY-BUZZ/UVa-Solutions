#include<bits/stdc++.h>
using namespace std;

string str; int a,g;
string tmp="";

int main()
{
    while(cin>>g>>str)
    {
        int s=str.size();
        a=s/g;
        for(int i=0;i<s;i++)
        {
            tmp+=str[i];

            if(((i+1)==a) || (((i+1)>a) && ((i+1)%a==0)))
            {
                for(int k=a-1;k>=0;k--)
                {
                    cout<<tmp[k];
                }
                tmp="";
            }
        }
        cout<<endl;
    }
    return 0;
}

