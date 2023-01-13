#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x,sum=1;
		cin>>x;
		for(int i=x;i>0;i--)
		{
			sum*=i;

		}
		
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}