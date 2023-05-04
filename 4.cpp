#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int x;
	cin >> x;

	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	for(int i=0;i<x/2;i++)
	{
           cout<<s1[i]<<" "<<s1[x-1-i]<<" ";
	}
	if(x%2!=0)
	{
		cout<<s1[x/2]<<" ";
	}
	return 0;
}