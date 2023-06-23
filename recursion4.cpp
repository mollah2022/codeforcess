#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long int t;
	cin >> t;
	while(t--)
	{
		int i,n,x;
		int mx=0,f=0;
		cin >> n;
		vector<int>v(101,0);
		for(int i=0;i<n;i++)
		{
			cin >> x;
			mx = max(mx,x);
			v[x]++;
		}

		for(i=1;i<=mx;i++)
		{
			if(v[i-1]<v[i])
			{
				cout << "NO\n";
				f=1;
				break;
			}
		}
		if(f==0)
		{
			cout << "YES\n";
		}
	}
	return 0;
}