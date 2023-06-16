#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	cin >> s1;
	int value;
	sort(s1.begin(),s1.end());

	for(int i=0;i<s1.size();i++)
	{
		int count=1;
		char ch;

		ch = s1[i];

		while(s1[i] == s1[++i])
		{
			count++;
		}
	  i--;
	  cout << ch <<" : "<< count << endl;
	}
	return 0;
}