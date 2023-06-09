#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x,y,z,found=0,sum;

	cin >> x >> y >> z;

	for(int i=x;i<=y;i++)
	{
		if(i%z==0)
		{
             found=1;
             sum = i;
             break;
		}
	}

	if(found==1)
	{
		cout << sum << endl;
	}
	else
	{
		cout << "-1" << endl;
	}

	return 0;
}