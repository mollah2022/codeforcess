#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y,sum=0,i,j,max=0,min=0;
	for( i=0;i<3;i++)
	{
		cin>>x>>y;
		if(x<0 || y<0)
		{
			continue;
		}
		else
		{
			if(x>=y)
			{
				max=x;
				min=y;

			}
			else
			{
				max=y;
				min=x;
			}
			for( j= min;j<=max;j++)
			{
				cout<<j<<" ";
                   sum+=j;
			}
			cout<<"sum ="<<sum<<endl;
			sum=0;

		}

	}
	return 0;
}