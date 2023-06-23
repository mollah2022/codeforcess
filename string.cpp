#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	string s1;
	cin >> s1;
	for(int i=0;i<x;i++)
	{
		char ch;
		ch=s1[i];
		for(int j=0;j<2;j++)
		{
			cout << ch ;
		}

	}

	cout << endl;
	return 0;
}