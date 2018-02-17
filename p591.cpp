#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1;
    int n;
    for( ; ; )
    {
        int c=0;
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            int ara[n];
            int sum=0;
            for(int i=0;i<n;i++)
            {
                cin>>ara[i];
                sum+=ara[i];
            }
            int l=sum/n;

            for(int i=0;i<n;i++)
            {
                if(ara[i]>l)
                {
                    c+=ara[i]-l;
                }
            }
        cout<<"Set #"<<t<<endl;
		cout<<"The minimum number of moves is "<<c<<"."<<endl<<endl;
        }
        t++;
    }
    return 0;
}
