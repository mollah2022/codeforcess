#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int x,y,z; cin >> x >> y >> z;
		if((x+y)>=10 || (y+z)>=10 || (x+z)>=10)
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