#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y,sum=0,esum=0,osum=0;
	cin >> x >> y;

	int mx = max(x,y);
	int mn = min(x,y);
	for(int i=mn;i<=mx;i++)
	{ 
		sum+=i;

	}
	cout << sum << endl;
	for(int i=mn;i<=mx;i++)
	{ 
		if(i%2==0)
		{
			esum+=i;
		}

	}

	cout << esum << endl;
	for(int i=mn;i<=mx;i++)
	{ 
		if(i%2!=0)
		{
			osum+=i;
		}

	}

	cout << osum << endl;

	return 0;
}