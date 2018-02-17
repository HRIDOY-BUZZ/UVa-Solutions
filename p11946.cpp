#include<bits/stdc++.h>
using namespace std;

string encoded = "48CD3F6H1JKLMN09QR57UVWXY2 ,.";
string decoded = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ,.";
int main()
{
    int T; cin>>T;
    string str;
    cin.ignore(31,'\n');
    while(getline(cin,str))
    {
        int s=str.size();
        for(int i=0;i<s;i++)
        {
            int a=encoded.find(str[i]);
            cout<<decoded[a];
        }
        cout<<endl;
    }
    return 0;
}
