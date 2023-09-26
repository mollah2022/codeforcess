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
   int t;
   cin>>t;
 
   while(t--){
        int n;
      long long sum1=0,sum2=0,min1,min2;
      cin>>n;
      long long ar1[n],ar2[n];
      cin>>ar1[0];
      min1=ar1[0];
 
     for(int i =1;i<n;i++){
        cin>>ar1[i];
        if(ar1[i]<min1){
            min1 = ar1[i];
        }
     }
 
     cin>>ar2[0];
      min2=ar2[0];
 
     for(int i =1;i<n;i++){
        cin>>ar2[i];
        if(ar2[i]<min2){
            min2 = ar2[i];
        }
     }
 
     for(int i=0;i<n;i++){
        sum1 += (min2+ar1[i]);
        sum2 += (min1+ar2[i]);
 
     }
 
     if(sum1>sum2){
        cout<<sum2<<endl;
     }else{
        cout<<sum1<<endl;
     }
 
 
   }
 
 
 
  return 0;
}