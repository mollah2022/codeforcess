#include<bits/stdc++.h>
using namespace std;
const int s = 100000;
void ans(int a[],int s)
{
	for(int i=0;i<s;i++)
	{
		cout << a[i] << " ";
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;
	int a1[x];
	int a2[x];
	for(int i = 0;i < x;i++)
	{
		cin >> a1[i];
	}
	for(int i = 0;i < x;i++)
	{
		cin >> a2[i];
	}
    
	ans(a2,x);
	ans(a1,x);

	return 0;
}