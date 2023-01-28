#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,flag=0;
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
			cout<<i<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<-1<<endl;
	}
	return 0;
}