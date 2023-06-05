#include<bits/stdc++.h>
using namespace std;

void ans(double a1[],int x)
{
	double sum=0;
	for(int i=0;i<x;i++)
	{
		sum+=a1[i];
	}

	double ava = (sum)/x;

	cout << fixed << setprecision(7) << ava << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;
	double a1[x];
	for(int i=0;i<x;i++)
	{
		cin >> a1[i];
	}
   ans(a1,x);
}