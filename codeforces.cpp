#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a1[n];
		int sum1 = 0,sum2 = 0;
		for(int i=0;i<n;i++)
		{
			cin >> a1[i];
		}
		for(int i=0; i<n;i++)
		{
			if(a1[i]%2==0)
			{
				sum1+=a1[i];
			}
			else
			{
				sum2+=a1[i];
			}
		}
		if(sum1%2==0 && sum2%2==0)
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