#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int x,y,sum=0;
		cin >> x >> y;
		sum=(x*60)+y;
		int sum_1=(24*60);
		cout<<sum_1-sum<<endl;

	}
	return 0;
}