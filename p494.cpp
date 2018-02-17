#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	while (getline(cin, input)) {
		int c = 0;
		bool Word = false;
		for (int i=0;i<input.length();i++){
			if (input[i]>='a' && input[i]<='z' || input[i]>='A' && input[i]<='Z'){
				if (!Word){
					c++;
					Word=true;
				}
			}
			else
				Word=false;
		}
		cout <<c<<endl;
	}
	return 0;
}
