#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z,sum=0;
	cin>>x>>y>>z;
	for(int i=1;i<=x;i++)
	{
		if(i/10==0)
		{
			if(i>=y && i<=z)
			{
				sum+=i;
			}
		}
		else
		{
			int number=i;
			int my_sum=0;
			while(number)
			{
				int digit=number%10;
				my_sum+=digit;
				number=number/10;
			}
			if(my_sum>=y && my_sum<=z)

			{
				sum+=i;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}