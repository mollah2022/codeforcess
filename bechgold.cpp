#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	     sajib
	         int n;
    cin >> n;
    
    if(n % 2 == 1) {
        n /= 2;
        n--;
        cout << n + 1 << endl << 3 << ' ';
    } else {
        n /= 2;
        cout << n << endl;
    }
    
    for(int i = 0; i < n; i++) cout << 2 << ' ';
    cout << endl;
	       
	return 0;
}