#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T; cin>>T;
    string msg;
    cin.ignore();
    for(int t=1;t<=T;t++)
    {
        getline(cin,msg);
        int btn=0;
        for(int i=0;i<msg.size();i++)
        {
            if(msg[i]=='a' || msg[i]=='d' || msg[i]=='g' || msg[i]=='j' ||
               msg[i]=='m' || msg[i]=='p' || msg[i]=='t' || msg[i]=='w' || msg[i]==' ')
                btn++;
            else if(msg[i]=='b' || msg[i]=='e' || msg[i]=='h' || msg[i]=='k' ||
               msg[i]=='n' || msg[i]=='q' || msg[i]=='u' || msg[i]=='x')
               btn+=2;
            else if(msg[i]=='c' || msg[i]=='f' || msg[i]=='i' || msg[i]=='l' ||
               msg[i]=='o' || msg[i]=='r' || msg[i]=='v' || msg[i]=='y')
               btn+=3;
            else if(msg[i]=='s' || msg[i]=='z')
                btn+=4;
        }
        cout<<"Case #"<<t<<": "<<btn<<endl;
    }
    return 0;
}
