#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,sum=0;;
	cin >> x;
	int s1[x];
	for(int i =0;i < x;i++)
	{
		cin>>s1[i];
	}
	for(int i =0;i < x;i++)
	{
		sum+=s1[i];
	}
	cout<<sum<<endl;
	return 0;
}