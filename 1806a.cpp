#include<bits/stdc++.h>
#define ll long long
#define fir first
#define sec second
#define pii pair<int,int>
using namespace std;

const int maxn=500005;
const int inf=0x3f3f3f3f;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int T;
    cin>>T;
    while(T--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b<=d&&c<=a+d-b) {
            cout<<(d-b)+(a+d-b-c)<<"\n";
        } else {
            cout<<"-1\n";
        }
    }
}