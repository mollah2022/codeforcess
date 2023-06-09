#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long int x,found=0,i;

	cin >> x;

	double res = log2(x)/log2(2);
	if((res-(long long) res)!= 0)
	{
		cout << "NO\n";
	}
	else
	{
		cout << "YES\n";
	}
	return 0;
}