#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,count1=0,count2=0;
		cin >> x;
		int s1[x];
		for(int i=0;i<x;i++)
		{
			cin >> s1[i];
		}
		for(int i=0;i<x;i++)
		{
			if(s1[i]==0)
			{
				
                     count1++;
			}
			else
			{
				count2++;
			}
		}
		if(count1<=1)
		{
			cout<<count1<<endl;
		}
		else
		{
			cout<<x-count1<<endl;
		}
	}
	return 0;
}