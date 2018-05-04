#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i=0;
    while(1)
    {
        cin>>str;
        if(str == "*")
            break;
        i++;
        if(str == "Hajj")
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        else if(str == "Umrah")
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
    }
    return 0;
}
