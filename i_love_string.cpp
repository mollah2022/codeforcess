#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);

     int t,i,j;
     cin >> t;
     while(t--)
     {
     	string s1;
     	char c1,c2;
     	string s2;
     	int d1,d2;
        cin >> s1 >> s2;
     	d1 = s1.size();
     	d2 = s2.size();
     	int mx = max (d1,d2);
     	for( i=0;i<mx;i++)
     	{
     		if(i<d1)
     		{
     			cout << s1[i];
     		}
     		if(i<d2)
     		{
     			cout << s2[i];
     		}
     		
     	}
     	cout << endl;
     }
     return 0;
}