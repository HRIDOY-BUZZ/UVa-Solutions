#include<iostream>
using namespace std;

int main()
{
    string keys= ("`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./");
    string input;
    while(getline(cin,input)){

        for(int i=0;i<input.size();i++){
            for(int j=0;j<keys.size();j++){
                if(input[i]==keys[j])
                    input[i]=keys[j-1];
            }
        }
       cout<<input<<endl;
    }

    return 0;
}
