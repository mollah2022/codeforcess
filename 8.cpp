#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,s;
	cin >> t;
	while(t--)
		{
			int x,y;
			cin >> x >> y;
			s=(y*6)*6;
			if(s>=x)
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}

		}
		return 0;
}