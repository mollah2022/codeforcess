#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if(ch >= 'A' && ch <= 'Z')
		{ 
			ch+=32;
		}
		else
		{
			ch-=32;
		
		}
		cout<<ch<<endl;
		return 0;
}