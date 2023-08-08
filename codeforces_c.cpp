#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define ull             unsigned long long

int32_t main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int t; cin >> t;
	while(t--)
	{
		int x,y,n; cin >> x >> y >> n;
		int count = 0;
		ll sum = 0;
		while(1)
		{
			if(x > y)
			{
				y+=x;
				//sum += y;
				count++;
			}
			else
			{
				x+=y;
				//sum += x;
				count++;
			}
			if(x > n || y > n)
			{
				break;
			}
		}
      cout << count << endl;
	}
	return 0;
}