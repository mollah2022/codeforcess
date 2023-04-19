#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,even=0,odd=0;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		int p;
		p*=x;
		for(int i=0;i<p;i++)
		{
			int g;
			cin >> g;
			if(g%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
		if(even==odd)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		even=0,odd=0;
	}
	return 0;
}