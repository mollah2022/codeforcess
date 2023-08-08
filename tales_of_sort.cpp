#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--)
	{
		long long int n; cin >> n;
		long long int a1[n];
		for(int i=0; i<n; i++)
		{
			cin >> a1[i];
		}

		long long int maxx = 0;
		for(int i=0; i<n-1; i++)
		{
			if(a1[i]>a1[i+1])
			{
				maxx = max(maxx,a1[i]);
			}
		}
		cout << maxx << endl;
		maxx = 0;
	}
	return 0;
}