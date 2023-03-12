#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,s3;
	cin >> s1;
	for(int i=s1.size();i>=0;i--)
	{
        s2=toupper(s1[i]);
        }
        cout<<s2;
        for(int j=1;j<s1.size();j++)
        { 
        	s3=tolower(s1[j]);
        	cout<<s3;

        }
	return 0;
}