#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin >> x;

	int *ptr;
	ptr=&x;

	cout << &x <<endl;
	cout << *ptr << endl;
	return 0;
}