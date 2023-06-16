#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1,s2;
	cin >> s1 >> s2;

	int k = s1.size();
	int p = s2.size();

	int y = min(k,p);

	int c1=0;

	for(int i=0;i<y;i++)
	{
		if(s1[i]>s2[i])
		{
			cout << s2 << endl;
			c1=0;
			break;
		}
		else if(s2[i]>s1[i])
		{
              cout << s1 << endl;
              c1=0;
              break;
		}
		else
		{
			c1 = -1;
		}
	}
if( c1==-1)
{

	if(s1>s2)
	{
		cout << s2 << endl;
	}
	else
	{
		cout << s1 << endl;
	}
}
	return 0;
}