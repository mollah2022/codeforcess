#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	int x,i,j;
	cin>>ch>>x;
	int s1[x];
	if(ch=='+')
	{
		for(i=0;i<x;i++)
			{
				cin>>s1[i];
				for(j=0;j<s1[i];j++)
				{
					cout<<ch;
				}
				cout<<endl;
			}
	}
	else if(ch=='-')
	{
		for(i=0;i<x;i++)
			{
				cin>>s1[i];
				for(j=0;j<s1[i];j++)
				{
					cout<<ch;
				}
				cout<<endl;
			}
	}
	else if(ch=='*')
	{
		for(i=0;i<x;i++)
			{
				cin>>s1[i];
				for(j=0;j<s1[i];j++)
				{
					cout<<ch;
				}
				cout<<endl;
			}
	}
	else
	{
		for(i=0;i<x;i++)
			{
				cin>>s1[i];
				for(j=0;j<s1[i];j++)
				{
					cout<<ch;
				}
				cout<<endl;
			}
	}
	return 0;
}