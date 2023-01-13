#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,rev=0,temp=0,rem=0;
	cin>>x;
	temp=x;
	while(temp>0)
	{
		 rem=temp%10;
		 rev=(rev*10)+rem;
		 temp=temp/10;

	}
	cout<<rev<<endl;
	if(rev!=x)
	{
		cout<<"NO\n";
	}
	else
	{
		cout<<"YES\n";
	}
	return 0;
}