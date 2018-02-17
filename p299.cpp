#include<iostream>
using namespace std;

int main()
{
        int n,num;
        cin>>n;
        while(n--){
            cin>>num;
            int ara[num];
            for(int i=0;i<num;i++){
                cin>>ara[i];
            }
            int c=0;
            bool s=false;
            do{
                s=false;
                for(int i=0;i<num-1;i++){
                    if(ara[i]>ara[i+1]){
                            c++;
                        swap(ara[i],ara[i+1]);
                        s=true;
                    }
                }
            }while(s);

            cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
        }
    return 0;
}
