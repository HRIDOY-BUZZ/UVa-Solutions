#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        while(n--)
        {
            int f, x=0;
            cin>>f;
            while(f--)
            {
                long int a,b,c,d;
                cin>>a>>b>>c;
                d=a*c;
                x=x+d;
            }
            cout<<x<<endl;
        }
    }
    return 0;
}
