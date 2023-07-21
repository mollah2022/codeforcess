#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	char ch;
	while(t--)
	{
		for(int i=0;i<8;i++)
		{
			string s1; cin >> s1;
			for(int j=0; j<8;j++)
			{
				if(s1[j]>='a' && s1[j]<='z')
				{
                          cout <<s1[j];
				}
			}
		}
		cout << endl;
	}

	return 0;
}