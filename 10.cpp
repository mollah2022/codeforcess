#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y;
	cin >> x >> y;
	if(x-y==1||y-x==1||(x==y && x!=0 && y!=0))
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}