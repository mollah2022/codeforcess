#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int s1[x];
	for(int i =0;i < x;i++)
	{
		cin>>s1[i];
	}
	for(int i =x-1;i >= 0;i--)
	{
        cout<<s1[i]<<" ";
	}
	return 0;
}