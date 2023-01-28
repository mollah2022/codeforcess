#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,sum=0;
	cin >> x;
    int s1;
     cin>>s1;
	while(s1>0)
	{
		long long int temp=s1%10;
		sum+=temp;
		s1=s1/10;
	}
	cout<<sum<<endl;
	return 0;
}