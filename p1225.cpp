#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        int digits[10]={0};
        int N; cin>>N;
        string s;
        for(int i=1;i<=N;i++)
        {
            stringstream ss;
            ss<<i;
            string str=ss.str();
            s+=str;
        }
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0')
                    digits[0]++;
                else if(s[i]=='1')
                    digits[1]++;
                else if(s[i]=='2')
                    digits[2]++;
                else if(s[i]=='3')
                    digits[3]++;
                else if(s[i]=='4')
                    digits[4]++;
                else if(s[i]=='5')
                    digits[5]++;
                else if(s[i]=='6')
                    digits[6]++;
                else if(s[i]=='7')
                    digits[7]++;
                else if(s[i]=='8')
                    digits[8]++;
                else if(s[i]=='9')
                    digits[9]++;
            }
        for(int i=0;i<10;i++)
        {
            cout<<digits[i];
            if(i<9)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
