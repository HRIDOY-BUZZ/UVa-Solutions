#include<bits/stdc++.h>
using namespace std;

int n;
char input[200];

bool check(char input[200])
{
    stack<char>a;
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]=='(' || input[i]=='[')
        {
            a.push(input[i]);
        }
        else
        {
            if(a.size()==0)
                return false;
            if((input[i]==')' && a.top()=='(') || (input[i]==']' && a.top()=='['))
                a.pop();
            else
                return false;
        }
    }
    return a.size()==0;
}

int main()
{

    scanf("%d\n",&n);
    while(n--)
    {
        gets(input);
        if(check(input))
            cout<<"Yes"<<endl;
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
