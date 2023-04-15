#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long x,y,z;
	cin >> x >> y >> z;

	if(x%2==0 && z>0 && x<1)
	{
		cout<<y<<endl;
	}
	else if(x%2==0 && y>x && z>0)
	{
		cout<<x/2<<endl;
	}
	else if(x<1)
	{
		cout<<0<<endl;
	}
	else if(x==1)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<y+((x-y)/2)<<endl;
	}
	return 0;
}