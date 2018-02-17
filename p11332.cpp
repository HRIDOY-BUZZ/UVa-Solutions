#include<bits/stdc++.h>
#define lld long long int
using namespace std;

int main()
{
    lld n; string str;
    while(cin>>n && n!=0)
    {
        while(n>9)
        {
            stringstream sss;
            sss<<n;
            sss>>str;
            int s=str.size();
            int a=0;
            for(int i=0;i<s;i++)
            {
                a+=(str[i]-48);
            }
            n=a;
        }
        cout<<n<<endl;
    }
    return 0;
}
