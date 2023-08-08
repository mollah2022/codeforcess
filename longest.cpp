#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int t; cin >> t;
	while(t--)
	{
		long long int x,ans=0,count=0; cin >> x;
		for(int i=1; i<101; i++)
		{
			if(x%i==0)
			{
				count++;
			}
			else
			{
				ans = max(count,ans);
					count = 0;
			}
			//ans = max(count,ans);
		}
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}