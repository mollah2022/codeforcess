#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int x,count=0,count1=0; cin >> x;
	int a1[x];
	for(int i=0; i<x; i++)
	{
		cin >> a1[i];
	}
	sort(a1,a1+x);
	int maxx = a1[0];
	for(int i=0;i<x;i++)
	{
		if(a1[i]>maxx)
		{
			maxx=a1[i];
		}
	}
	if(x==1)
	{
		cout << 0 << endl;
		return 0;
	}
	for(int i=0;i<x;i++)
	{
		if(a1[i]==maxx)
		{
            count1++;
			continue;
		}
		else
		{
            count+=(maxx-a1[i]);
		}
	}
	if(count1==x)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << count << endl;
	}
	return 0;
}