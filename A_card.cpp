#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int x,sum=0,found=0;
	cin >> x;
	int s1[x];
	for(int i=1;i<=x;i++)
	{
		cin >> s1[i];
	}
	int max=s1[0];
	int min=s1[0];
	for(int i=1;i<=x;i++)
	{
		if(s1[i]>max)
		{
			max=s1[i];
		}
		if(s1[i]<min)
		{
			min=s1[i];
		}
	}
	sum=(max+min);
	while(x/2--)
	{
		for(int i=1;i<=x;i++)
		{
			if(s1[i]+s1[i+1]==sum||s1[i]+s1[i+2]==sum)
			{
				found=1;
			}
		}
	}
}