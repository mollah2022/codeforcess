#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long x,sum=0;
		cin >> x;
		while(x>0)
		{
			sum+=x;
			x/=2;
		}

		cout << sum << endl;
	}
	return 0;
}