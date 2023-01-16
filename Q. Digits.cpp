#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		cin>>s1;
		for(int j=s1.size()-1;j>=0;j--)
		{
			cout<<s1[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}