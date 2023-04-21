#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	int x,y,z,w;
	while(t--)
	{
		cin >> x >> y >> z >> w;
		int m1=max(x,y);
		int m2=max(z,w);
		int mi1=min(x,y);
		int mi2=min(z,w);
		if(m1>mi2 && m2>mi1 &&(m1>=m2 ||m2>=m1))
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
		m1=0,m2=0,mi1=0,mi2=0;
	}
	return 0;
}