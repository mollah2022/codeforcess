#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long x,y,z;
	cin >> x >> y >> z;
	if(x%z==0 && y%z==0)
	{
		cout<<"Both\n";
	}
	else if(x%z==0 && y%z!=0)
	{
		cout<<"Memo\n";
	}
	else if(x%z!=0 && y%z==0)
	{
		cout<<"Momo\n";
	}
	else
	{
		cout<<"No One\n";
	}
	return 0;
}