#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x;
	int y;
	cin>>x;
	y=x;
	if(y==x)
	{
		cout<<"int "<<y<<endl;
	}
	else
	{
		cout<<"float "<<y<<" "<<x-y<<endl;
	}
	return 0;
}