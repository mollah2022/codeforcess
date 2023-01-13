#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,i,j,c=0;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				c++;
				break;
				
			}
		}
		if(c==0 && i>1)
		{
			cout<<i<<" ";
		}
		c=0;
	}
	return 0;
}