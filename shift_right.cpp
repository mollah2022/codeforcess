#include<bits/stdc++.h>
using namespace std;

void ans(int s1[],int x,int y)
{
	int p = y%x;
	for(int i = x-p;i < x; i++)
	{
	    cout << s1[i] << " ";
	}

	for(int i = 0;i < x-p; i++)
	{
		cout << s1[i] << " ";
	}

	cout << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y;
	cin >> x >> y;

	int s1[x];

	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	ans(s1,x,y);
}