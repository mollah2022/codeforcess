#include<bits/stdc++.h>
using  namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y;
	cin >> x >> y;

	if(x>y)
	{
		cout << x+(x-1) << endl;
	}
	else if (x<y)
	{
		cout << y+(y-1) << endl;
	}
	else
	{
		cout << x+y << endl;
	}
	return 0;
}