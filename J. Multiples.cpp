#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	if(x%y==0 || y%x==0)
	{
		cout<<"Multiples\n";
	}
	else
	{
		cout<<"No Multiples\n";
	}
	return 0;
}