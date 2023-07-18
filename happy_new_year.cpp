#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a1[3];

	for(int i=0; i<3; i++)
	{
		cin >> a1[i];
	}
	sort(a1,a1+3);
	cout << a1[2]-a1[1]+a1[1]-a1[0]<<endl;
	return 0; 
}