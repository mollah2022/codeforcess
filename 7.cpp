#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1;
	cin >> s1;
	int num1=s1[0]-'0';
	int num2=s1[1]-'0';
	if(num2==0)
	{
		cout<<"YES\n";
	}
	else if(num1%num2==0 || num2%num1==0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}
