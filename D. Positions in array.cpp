#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin >> x;
	int s1[x];
	for(int i =0;i < x;i++)
	{
		cin >> s1[i];
		if(s1[i]<=10)
		{
			cout <<"A"<< "["<< i<< "]"<< " = "<< s1[i];
			cout <<endl;
		}
	}
	return 0;
}