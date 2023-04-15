#include<bits/stdc++.h>
using namespace std;

int main()
{
	double x,y,z;
	cin >> x >> y >> z;
	long long sum=0;
	double sum2=0;
	sum=(x*y)/z;
	sum2=(x*y)/z;
	double test =(sum2-sum);
	if(test>0)
	{
		cout<<"double\n";
	}
	else if(sum>2147483647)
	{
		cout<<"long long\n";
	}
	else
	{
           cout<<"int\n";
	}
	return 0;
}