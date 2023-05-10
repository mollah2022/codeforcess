#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,count=0;
	cin >> x;

	string s1;
	cin >> s1;

	for(int i=0;i<x;i++)
	{
		if(s1[i]==s1[i+1])
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
	
}