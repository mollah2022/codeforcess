#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int count = 0;
		int x; cin >> x;
		int a1[x];
		for(int i=1; i<=x; i++)
		{
			cin >> a1[i];
		}
		for(int i=1; i<=x; i++)
		{
			if(i==a1[i])
			{
				count++;
			}
		}
		//ans = (count+1)/2;
		//cout << ans << endl;
		cout << (count+1)/2 << endl;
	}
	return 0;
}