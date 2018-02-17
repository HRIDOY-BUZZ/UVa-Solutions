#include<bits/stdc++.h>
using namespace std;

int main()
{
    int C;
    cin>>C;
    for(int i=1;i<=C;i++)
    {
        int N;
        cin>>N;
        int avg,sum=0,Count=0;
        int stdnt[N];

        for(int i=0;i<N;i++)
        {
            cin>>stdnt[i];
            sum+=stdnt[i];
        }
        avg=sum/N;

        for(int i=0;i<N;i++)
        {
            if(stdnt[i]>avg)
                Count++;
        }
        double per= (Count*100.0)/N;
        cout<<setiosflags(ios::fixed)<< setprecision(3)<<per<<"%"<<endl;
    }
    return 0;
}
