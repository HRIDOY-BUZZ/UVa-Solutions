#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,n,Count;
    while(scanf("%d %d",&a,&b)!=EOF){
    int i=a,j=b;

    if(i>j){
    swap(i,j);
    }
    int Max=0;

    for(n=i;n<=j;n++){
            Count=1;
            int c=n;
        for(unsigned int m=n;m>0;m--){
            m=c;
            if(m==1){
                break;
            }
            else if(m%2==1){
                c=3*m+1;
            }
            else{
                c=m/2;
            }
            Count++;
        }

        if(Count>Max){
            Max=Count;
        }
    }
    cout<<a<<" "<<b<<" "<<Max<<endl;
    }

    return 0;
}
