#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}
	for(int i=0;i<x;i++)
	{
		if(s1[i] == 0)
		{
			reverse(s1,s1+i);
		}
	}
	for(int i=0;i<x;i++)
	{
		cout<<s1[i]<<" ";
	}
return 0;
}