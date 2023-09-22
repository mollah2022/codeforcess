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
      tst{
        
            int n=10,m=10;
            char a[n][m];
            int sum=0;
            for(int i=0;i<n;i++){
               for(int j=0;j<m;j++){
                  cin >> a[i][j];
               }
            }
             for(int i=0;i<n;i++){
               for(int j=0;j<m;j++){
                  if(a[i][j]=='X'){
                     if(i == 0 || j==0 || i == 9 || j == 9)
               sum+=1;
            else if(i == 1 || j==1 || i == 8 || j == 8)
               sum+=2;
            else if(i == 2 || j==2 || i == 7 || j == 7)
               sum+=3;
            else if(i == 3 || j==3 || i == 6 || j == 6)
               sum+=4;
            else if(i == 4 || j==4 || i == 5 || j == 5)
               sum+=5;
               }
            } 
         }
             cout << sum << endl;
       }
   return 0;
}