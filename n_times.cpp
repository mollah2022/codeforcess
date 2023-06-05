#include<bits/stdc++.h>
using namespace std;

void ans(int x,char ch)
{
	while(x--)
	{
		cout << ch << " ";
	}
	cout << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--)
	{
		int x;
		cin >> x;
		char ch;
		cin >> ch;

		ans(x,ch);
	}
}