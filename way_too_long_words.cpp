#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		string s1;
		cin >> s1;
		int k=s1.size();
		if(k>10)
		{
            cout<<s1[0]<<k-2<<s1[k-1]<<endl;
		}
		else
		{
			cout<<s1<<endl;
		}
	}
	return 0;
}