#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char ch;
    int count=0;
        while(scanf("%c",&ch)==1){
            if(ch=='"'){
                count++;
                if(count%2==1)
                    printf("``");
                else if(count%2==0)
                    printf("''");
            }
            else printf("%c",ch);
        }
    return 0;
}
