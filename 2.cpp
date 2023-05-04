#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    long long sum=0;
	int x,y;
	cin >> x >> y;
	int s1[x];

	for(int i=0 ; i < x ; i++)
	{
		cin >> s1[i];
	}
	sort(s1,s1+x);
	reverse(s1,s1+x);
	for(int i=0;i<y;i++)
	{
		if(s1[i]<0)
		{
			break;
		}
           sum+=s1[i];
	}
	cout<<sum<<endl;
	return 0;
}