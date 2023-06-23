#include<bits/stdc++.h>
using namespace std;

void solve(int x)
{
	if(x==0){
		return;
	}
	
	cout << x << endl;
	solve(x-1);
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

    solve(x);
}