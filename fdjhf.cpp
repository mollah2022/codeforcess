#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define sajib ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;
#ifndef ONLINE_JUDGE
#else
#define dbg(x...)
#endif
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
   return uniform_int_distribution<int>(l, r) (rng);
}

int32_t main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tst{
        int n; cin >> n;
        vector < int > v1;
        for(int i=0; i<n; i++){
         int y; cin >> y;
         v1.push_back(y);
        }

        vector < int > v2;
        v2.push_back(v1[0]);

        for(int i=1; i<n; i++){
           if(v1[i] >= v1[i-1]){
               //v1.push_back(v1[i]-v1[i-1]);
               v2.push_back(v1[i]);
           }
           else{
              v2.push_back(v1[i]);
              v2.push_back(v1[i]);
           }
        }

        int g = v2.size();
        cout << g << endl;
        for(int i=0; i<g; i++){
           cout << v2[i] <<" ";
        }
        cout << endl;
    }
   return 0;
}