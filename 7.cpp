#include<bits/stdc++.h>
using namespace std;
int counter = 1;
void  sum(int x)
{
	for(int i=1;i<=x;i++)
	{
		if(i!=1)
		{
			cout<<" ";
		}
		cout<<i;
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;
	sum(x);
}