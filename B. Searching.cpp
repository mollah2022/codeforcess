#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,count=0;
	cin>>x;
	int s1[x];
	for(int i=0;i<x;i++)
	{
		cin>>s1[i];
	}
	int y;
	cin>>y;
	for(int i=0;i<x;i++)
	{
		if(s1[i]==y)
		{
        count++;
		}
	}
	if(count>1)
	{
		cout<<0<<endl;
	}
	else if(count!=1)
	{
		cout<<"-1\n";
	}
	else
	{
		cout<<1<<endl;
	}
	return 0;
}