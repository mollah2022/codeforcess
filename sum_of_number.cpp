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
    sajib
  int t,n;
    int aa[100000];
    cin>>t;
    while(t--)
    {
        int d=0,rem=0;
        cin>>n;
        if(n >= 1000){
            rem=n%1000;
            aa[d++]=n-rem;
            n%=1000;
        }
        if(n >= 100){
            rem=n%100;
            aa[d++]=n-rem;
            n%=100;
        }
        if(n >= 10){
            rem=n%10;
            aa[d++]=n-rem;
            n%=10;
        }
        if(n<10 && n>0){
            aa[d++]=n;
        }
        vector<int>va;
        for(int i=0; i<d; i++){
            va.push_back(aa[i]);
        }
        cout<<va.size()<<endl;
        for(int i=0; i<va.size(); i++){
            cout<<va[i]<<" ";
        }
        cout<<endl;
    }
   return 0;
}