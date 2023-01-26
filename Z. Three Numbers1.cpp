#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,s,i,sum=0;
	cin>>x>>s;
	for(i=0;i<=x;i++)
	{
		for(int j=0;j<=x;j++)
		{
			int z=s-i-j;
			if(z>=0 && z<=x)
			{
				sum++;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}