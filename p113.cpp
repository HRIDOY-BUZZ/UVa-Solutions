#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
	int n;
	double p;

	while (cin>>n>>p)
	{
	    double k=pow(p,1.0/n);
		cout<<setprecision(0)<<k<<endl;
	}
	return 0;
}
