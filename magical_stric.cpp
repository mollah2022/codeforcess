#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int x; cin >> x;
		if(x%2==0)
		{
			cout << x/2 << endl;
		}
		else
		{
			cout << (x/2)+1 << endl;
		}
	}
	return 0;
}