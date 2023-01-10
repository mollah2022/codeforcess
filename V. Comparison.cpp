#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	char ch;
	cin>>x>>ch>>y;
	switch(ch)
	{
	case '>':
		if(x>y)
		{
			cout<<"Right\n";
			break;
		}
		else
		{
			cout<<"Wrong\n";
			break;
		}
		case '<':
		if(x<y)
		{
			cout<<"Right\n";
			break;
		}
		else
		{
			cout<<"Wrong\n";
			break;
		}
		case '=':
		if(x==y)
		{
			cout<<"Right\n";
			break;
		}
		else
		{
			cout<<"Wrong\n";
			break;
		}
		default:
			cout<<"Error\n";
			break;

	}
	return 0;
}