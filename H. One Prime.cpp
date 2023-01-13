#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,i,c=0;
	cin>>x;
	if(x<=0)
	{
		cout<<"NO\n";
		return 0;
	}
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
           c++;
           break;
		}
	}
	if(c==0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}