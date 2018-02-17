#include<iostream>
#include <cstdio>
using namespace std;

int main()
{
    char ch;
        while (scanf("%c", &ch)!=EOF)
            if (ch == '\n')
                cout<<endl;
            else{
                int c=ch-7;
                cout<< (char) c;
            }
        return 0;
}
