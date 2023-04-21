#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,sum=0;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		int s1[x];

		for(int i=0;i<x;i++)
		{
			cin >> s1[i];
             sum+=s1[i];
		}
		if(sum==x)
		{
			cout<<0<<endl;
		}
		else if(sum<x)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<sum-x<<endl;
		}
		sum=0;
	}
	return 0;
}