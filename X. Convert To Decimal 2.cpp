#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,count=0,rev;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		rev=x;
		while(rev>0)
		{
			int temp=rev%2;
			if(temp==1)
			{
				count++;
			}
			rev=rev/2;
			
		}
		int sum=0;
		for(int i = 0; i < count; i++)
			{
				sum+=pow(2,i);
			}
			cout<<sum<<endl;
			sum=0;
			count=0;
	}
	return 0;
}