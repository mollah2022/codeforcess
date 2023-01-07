#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	char ch;
	cin>>x>>ch>>y;
	if(ch=='+')
	{
		cout<<x+y<<endl;
	}
	else if(ch=='-')
	{
		cout<<x-y<<endl;
	}
	else if(ch=='*')
	{
		cout<<x*y<<endl;
	}
	else
	{
		cout<<x/y<<endl;
	}
	return 0;
}