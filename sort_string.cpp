#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	long long int x;
	cin >> x;
	string s1,s2 = "";
	cin >> s1;
    for(int i=0;i<s1.size()-1;i++)
    {
    	for(int j=i+1;j<s1.size()-1-i;j++)
    	{
    		if(s1[j]>s1[j])
    	{
    		char temp = s1[i];
    		s1[i] = s1[i+1];
    		s1[i+1] = temp;
    	}
         s2+=s1[i];
    	}
    }

    cout << s2 << endl;
	return 0;
}