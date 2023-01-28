#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>> x;
	int s1[x];
	for(int i = 0;i < x;i++)
	{
		cin>> s1[i];
		if(s1[i]>0)
		{
			cout<<1<<" ";
		}
		else if(s1[i]<0)
		{
			cout<<2<<" ";
		}
		else
		{
			cout<<0<<" ";
		}
	}
	return 0;
}