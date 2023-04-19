#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		int a,b;
		a=x/3;
		b=x/3;
		if(x%3==1)
		{
			a++;
		}
		else
		{
			b++;
		}
		cout<<a<<" "<<b<<endl;
	}
	return 0;

}