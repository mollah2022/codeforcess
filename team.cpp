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
         int n; cin >> n;
         vector < int > v1,v2,v3;
         int a1[n],mn = 0;
         int one = 0,two = 0,three = 0;
         for(int i=1;i<=n;i++) cin >>a1[i];
            for(int i=1;i<=n;i++){
               if(a1[i]==1) {one++;}
               else if(a1[i]==2){ two++;}
               else {three++;}
            }
           if(one!=0 && two!=0 && three!=0){ mn = min ({one,two,three});}
            cout << mn << endl;
              for(int i=1;i<=n;i++){
               if(a1[i]==1) {v1.push_back(i);}
               else if(a1[i]==2){ v2.push_back(i);}
               else {v3.push_back(i);}
            }
            for(int i=0;i<mn;i++){
               cout << v1[i] <<" " << v2[i] << " " << v3[i] << endl;
            }


   return 0;
}