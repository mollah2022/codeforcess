#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,m,d,temp;
	cin>>x;
		y=x/365;
		m=(x%365)/30;
		d=((x%365)%30);
		cout<<y<<" years"<<endl;
		cout<<m<<" months"<<endl;
		cout<<d<<" days"<<endl;
		return 0;
}