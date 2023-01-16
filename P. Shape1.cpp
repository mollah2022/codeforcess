#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,i,j;
	cin>>x;
	for(i=x;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}