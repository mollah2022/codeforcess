#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,result,myresult;
	char ch1,ch2;
	cin>>x>>ch1>>y>>ch2>>result;
	switch(ch1)
	{
	case '+':
		myresult=(x+y);
		if(myresult==result)
		{
			cout<<"Yes\n";
			break;
		}
		else
		{
			cout<<myresult<<endl;
			break;
		}
		case '-':
		myresult=(x-y);
		if(myresult==result)
		{
			cout<<"Yes\n";
			break;
		}
		else
		{
			cout<<myresult<<endl;
			break;
		}
	case '*':
		myresult=(x*y);
		if(myresult==result)
		{
			cout<<"Yes\n";
			break;
		}
		else
		{
			cout<<myresult<<endl;
			break;
		}
	default:
		cout<<"ERROR!\n";
		break;
	}
	return 0;
}