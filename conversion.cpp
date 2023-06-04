#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	char ch;
	getline(cin,s1);
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]>=65 && s1[i]<=90)
		{
			ch=s1[i]+32;
			cout<<ch;
		}
		else if (s1[i]>=97 && s1[i]<=122)
		{
			ch=s1[i]-32;
			cout<<ch;
		}
		else
		{
			cout<<" ";
		}
	}
	cout<<endl;
	return 0;
}