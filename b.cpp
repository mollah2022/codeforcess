#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y,count=0;
	cin >> x >> y;
	for(int i=x;i<=y;i++)
	{
		count++;
	}

	cout << count << endl;
	return 0;
}