#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string x;
	getline(cin,x);
	long long int sum=0;
	int count =0;
	long long s = x.size();

	for(int i=0;i<s;i++)
	{

		if(x[i]=='0' || x[i]=='1')
		{
			count++;
		}

		if(x[i]=='1')
		{
             sum +=pow(2,count-1);
		}
	}
 
  cout << sum << endl;
	return 0;
}