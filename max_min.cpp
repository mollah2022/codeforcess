#include<bits/stdc++.h>
using namespace std;

void ans(int a1[],int x)
{
	int max = a1[0];
	int min = a1[0];

	for(int i=0;i<x;i++)
	{
		if(a1[i]<min)
		{
			min = a1[i];
		}
		if(a1[i]>max)
		{
			max = a1[i];
		}
	}
	cout << min << " " << max << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int a1[x];
	for(int i=0;i<x;i++)
	{
		cin >> a1[i];
	}

	ans(a1,x);
}