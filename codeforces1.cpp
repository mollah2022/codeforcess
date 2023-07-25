#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		int a,b,c,d; cin >> a >> b >> c >> d;
		int a1[a];
		for(int i=0; i<a; i++)
		{
			cin >> a1[i];
		}
		int count = 0;
		for(int i=0;i<a;i++)
		{
			for(int j=1;j<b;j++)
			{
				int ans = (j*c);
				int ans1 = abs(a1[i]-d);
				if(ans==ans1)
				{
					count++;
				}
				else
				{
					continue;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}