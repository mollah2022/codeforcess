#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	string s1; cin >> s1;
	string s2 = "hello";
	int i = 0,j = 0;
	while(1)
	{
		if(i ==s1.size() || j == s2.size())
		{
			break;
		}
		else if(s1[i]==s2[j])
		{
			j++;

		}
		i++;
	}
	if(j==5)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	return 0;
}