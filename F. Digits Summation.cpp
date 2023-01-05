#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y;
	cin>>x>>y;
	long long int temp1,temp2,sum=0;
	temp1=x%10;
	temp2=y%10;
	sum=(temp1+temp2);
	cout<<sum<<endl;
	return 0;
}