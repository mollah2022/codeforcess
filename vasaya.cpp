#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x,y; cin >> x >> y;
	if(x>=y)
	{
		x = (x-y);
		x /= 2;
		cout << y << " " << x << endl;
	}
	else if(y>=x)
	{
           y = (y-x);
           y = y/2;
           cout << x << " " << y << endl;
	}
	return 0;
}