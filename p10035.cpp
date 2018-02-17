#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    string a,b;
    int c,d;

    while(cin>>a>>b){
        if(a=="0" && b=="0")
            break;
        else{
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());

            c=a.size();
            d=b.size();
            if(c<d){
                swap(a,b);
                swap(c,d);
            }
            int counter=0,t=0;
            for(int i=0;i<d;i++){
                    int x,y;
                x=a[i]-48;
                y=b[i]-48;

                if((x+y+t)>9){
                        t=1;
                    counter++;
                }
                else
                    t=0;
            }
            for(int i=d;i<c;i++){
                int x=a[i]-48;
                if((x+t)>9){
                    t=1;
                    counter++;
                }
                else
                    t=0;
            }
            if(counter==0)
                cout<<"No carry operation."<<endl;
            else if(counter==1)
                cout<<"1 carry operation."<<endl;
            else
                cout<<counter<<" carry operations."<<endl;
        }
    }
    return 0;
}
