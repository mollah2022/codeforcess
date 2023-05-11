#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,i,j,temp=0;
	cin >> x;

	int s1[x];
	for( i=0;i<x;i++)
	{
		cin >> s1[i];
	}

	for( i=0;i<x-1;i++)
	{
		for( j=0;j<x-i-1;j++)
		{
			if(s1[j]<s1[j+1])
			{
				temp=s1[j];
				s1[j]=s1[j+1];
				s1[j+1]=temp;
			}
		}
	}

	for( i=0 ;i<x;i++)
	{
		cout<<s1[i]<<" ";
	}
	return 0;
}