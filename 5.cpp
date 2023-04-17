#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long x;
	cin >> x;
	long long int r=x/4;
	long long int c;
	if(r%2==0)
	{
		c=x%4;
	}
	else
	{
		c=3-(x%4);
	}
	cout<<r<<" "<<c<<endl;
	return 0;
}