#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long x,y,z;
	cin >> x >> y >> z;
	long long res=0,mn=0;
	mn=min({x,y,z});
	res+=mn;
	x-=mn;
	y-=mn;
	z-=mn;
	mn=min(x/2,z);
	res+=mn;
	cout<<res<<endl;
	return 0;
}