#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	string s2;
	cin >> s1 >> s2;
	cout<<s1.size()<<" "<<s2.size()<<endl;
    string s3;
    s3=s1+s2;
    cout<<s3<<endl;
    char temp;
    temp=s1[0];
    s1[0]=s2[0];
    s2[0]=temp;
    cout<<s1<<" "<<s2<<endl;
	return 0;
}