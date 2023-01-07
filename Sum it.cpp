#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int x,y,z,sum=0;
	cin>>x>>y>>z;
	sum=(x+y);
	if(sum==z)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
	return 0;
}