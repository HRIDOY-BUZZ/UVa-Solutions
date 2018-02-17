#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int t=1;;t++)
    {
        string str;
        cin>>str;
        if(str == "#")
            break;
        else
        {
            cout<<"Case "<<t<<": ";
            if(str == "HELLO")
                cout<<"ENGLISH"<<endl;
            else if(str == "HOLA")
                cout<<"SPANISH"<<endl;
            else if(str == "HALLO")
                cout<<"GERMAN"<<endl;
            else if(str == "BONJOUR")
                cout<<"FRENCH"<<endl;
            else if(str == "CIAO")
                cout<<"ITALIAN"<<endl;
            else if(str == "ZDRAVSTVUJTE")
                cout<<"RUSSIAN"<<endl;
            else
                cout<<"UNKNOWN"<<endl;
        }
    }
    return 0;
}
