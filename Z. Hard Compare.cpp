#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,c,d;
	cin>>a>>b>>c>>d;
    if(b*log(a)>d*log(c))
    	cout<<"YES\n";
    else
    	cout<<"NO\n";
    return 0;
}