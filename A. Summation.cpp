#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	int s1[x];
	int sum=0,i;
	for(i=0;i<x;i++)
	{
		cin>>s1[i];
		
		sum+=(s1[i]);

	}
	cout<<abs(sum)<<endl;
	return 0;
}