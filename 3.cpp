#include<bits/stdc++.h>
using  namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y;
	cin >> x >> y;
	int k=(x&y);
	cout<<k<<endl;
	int p=(x|y);
	cout<<p<<endl;
	int l=(x^y);
	cout<<l<<endl;
	return 0;
}