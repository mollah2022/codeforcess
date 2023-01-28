#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,i,j,count=0;
	cin >> x;
	int s1[x];
	for( i=0; i < x;i++)
	{
		cin >> s1[i];
	}
	for(int i=0;i<=x/2;i++)
	{
       if(s1[i]!=s1[x-1-i])
       {
       	count=1;
       	break;
       }
	}
	if(count==0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	
	return 0;
}