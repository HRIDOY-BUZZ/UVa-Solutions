#include<bits/stdc++.h>
#define C 12.01
#define N 14.01
#define O 16.00
#define H 1.008
using namespace std;

int main()
{
    int T; cin>>T;
    for(int t=1;t<=T;t++)
    {
        char s[128];
        scanf("%s",&s);
        double sum=0;

        for(int i=0;s[i];++i){
            char Check= s[i]=='C' || s[i]=='N' || s[i]=='O' || s[i]=='H';

            if(Check && (s[i+1]>='0' && s[i+1]<='9') && (s[i+2]>='0' && s[i+2]<='9'))
            {
                int digits= (s[i+1]-48)*10+s[i+2]-48;
                switch(s[i])
                {
                case 'C':
                    sum+=C*digits;
                    break;
                case 'N':
                    sum+=N*digits;
                    break;
                case 'O':
                    sum+=O*digits;
                    break;
                case 'H':
                    sum+=H*digits;
                    break;
                }
            }
            else if(Check && (s[i+1]>='0' && s[i+1]<='9'))
            {

                int digit=s[i+1]-48;
                switch(s[i])
                {
                case 'C':
                    sum+=C*digit;
                    break;
                case 'N':
                    sum+=N*digit;
                    break;
                case 'O':
                    sum+=O*digit;
                    break;
                case 'H':
                    sum+=H*digit;
                    break;
                }
            }
            else if(Check && (s[i+1]!='C' || s[i+1]!='N' || s[i+1]!='O' ||s[i+1]!='H'))
            {
                switch(s[i])
                {
                case 'C':
                    sum+=C;
                    break;
                case 'N':
                    sum+=N;
                    break;
                case 'O':
                    sum+=O;
                    break;
                case 'H':
                    sum+=H;
                    break;
                }
            }
        }
        printf("%.3f\n",sum);
    }
    return 0;
}
