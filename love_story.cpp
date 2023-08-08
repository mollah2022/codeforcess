#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,count=0; cin >> t;
	while(t--)
	{
		string s1,s2; cin >> s1;

        s2 = "codeforces";
        for(int i=0; i<10; i++)
        {
        	if(s1[i]!=s2[i])
        	{
        		count++;
        	}
        }
        cout << count << endl;
        count = 0;
	}
	
	return 0;
}