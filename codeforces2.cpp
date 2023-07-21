#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,count=0,ans=0; cin >> t;
	while(t--)
	{
		int x; cin >> x;
		for(int i=1;i<=x;i++)
		{
			int a,b; cin >> a >> b;
			if(a<=10)
			{
				if(b>count)
				{
					count = b;
					ans = i;
				}
			}

		}
		cout << ans << endl;
		count = 0;
	}
	return 0;
}