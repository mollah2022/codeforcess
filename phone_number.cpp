#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,count=0,found=0;
	cin >> x;
	string s1;
	cin >> s1;

	for(int i=0;i<x;i++)
	{
		if(s1[i]=='8')
		{
			count++;
			found=1;
			
		}
	}
	
    if(x>=11 && found==1)
	{
		int sum=(x/11);
		cout<<min(sum,count)<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
return 0;

}
