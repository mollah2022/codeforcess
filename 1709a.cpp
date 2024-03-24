#include<bits/stdc++.h>
using namespace std;
#define IO                  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll               "\n"
#define ll                  long long
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
ll a[N], b[N] ,q[N], s[N], w[N], xy[N], l, r, v, x, y, j;
int main()
{
    IO
    int Tc; cin >> Tc;
    while(Tc--){
        int x; cin >> x;
        fr1(i, 3) cin >> a[i];
        if(a[x] != 0 && a[a[x]] != 0) cout << "YES" << endll;
        else cout << "NO" << endll;
    }
    return 0;
}