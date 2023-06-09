#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	int p=0,q=0;
	cin >> t;

	while(t--)
	{

		int x,y,p=0;
		cin >> x >> y;
		p=(x+y);
		if(p%2==0)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}

		}
	return 0;
}