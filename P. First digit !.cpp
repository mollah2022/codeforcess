#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,temp,p=0;
	cin>>x;
	while(x!=0)
	{
       temp=x%10;
       p=p*10+temp;
       x=x/10;
	}
	int l=0;
	l=p%10;
	if(l%2==0)
	{
		cout<<"EVEN\n";
	}
	else
	{
		cout<<"ODD\n";
	}
	return 0;
}