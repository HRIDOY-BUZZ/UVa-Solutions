#include<bits/stdc++.h>
using namespace std;

string str;

int main()
{
    while(getline(cin,str))
    {
        int s=str.size();
        for(int i=0;i<s;i++)
        {
            int c=0;
           if(str[i]!=' ')
           {
               while(str[i+c]!=' ' && (i+c)<s)
                   c++;
               for(int k=(i+c)-1;k>=i;k--)
                   cout<<str[k];
               i+=(c-1);
           }
           else
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
