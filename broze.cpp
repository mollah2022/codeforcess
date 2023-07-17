#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	cin >> s1;

	for(int i=0; i<s1.size(); i++)
	{
          if(s1[i]=='.')
          {
          	cout << 0;
          }
          else if (s1[i]=='-' && s1[i+1]=='.')
          {
          	 cout << 1;
          	 s1[i+1]=s1[i+2];
          	 i=i+1;
          } 
          else if(s1[i]=='-' && s1[i+1]=='-')
          {
          	  cout << 2;
          	  s1[i+1]=s1[i+2];
          	  i=i+1;
          }
	}

	return 0;
}