#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y,found=0,value=0;
	cin >> x;

	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin >> s1[i];
	}
	 cin >> y;
	for(int i=0;i<x;i++)
	{
		if(s1[i]==y)
		{
           found=1;
           value=i;
           break;

		}
	}
	if(found==1)
	{
		for(int i=0;i<x;i++)
		{
			s1[i+1]=s1[i+2];
		}
		for(int i=0;i<x-1;i++)
		{
			cout<<s1[i]<<" ";
		}

	}
	else
	{
		reverse(s1,s1+x);
		for(int i=0;i<x;i++)
		{
			cout<<s1[i]<<" ";
		}
	}
	return 0;
}