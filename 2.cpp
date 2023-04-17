#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	for(int i=1;i<=x;i++)
	{
		for(int j=0;j<x;j++)
		{
			if(i==x/2+1 && j==i-1)
			{
				cout<<"X";
			}
			else if(j==x-i)
			{
				cout<<"/";
			}
			else if(j==i-1)
			{
				cout<<"\\";
			}
			else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}