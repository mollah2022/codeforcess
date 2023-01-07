#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if(ch >= 48 && 57 >= ch)
	{
		cout<<"IS DIGIT\n";
	}
	else if(ch >= 65 && ch <= 90)
	{
		cout<<"ALPHA\n"<<"IS CAPITAL\n";
	}
	else if(ch >= 97 && ch <= 122)
	{
		cout<<"ALPHA\n"<<"IS SMALL\n";
	}
	return 0;
}