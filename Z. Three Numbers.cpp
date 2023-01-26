#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,s,count=0;
	cin>>k>>s;
	for(int x=0;x<=k;x++)
	{
		for(int y=0;y<=k;y++)
		{
			for(int z=0;z<=k;z++)
			{
				if(x+y+z==s)
				{ 
					count++;

				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}