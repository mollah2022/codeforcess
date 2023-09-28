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
          int count = 0;
           int a,b; cin >> a >> b;
           if(a==b){
              cout << 0 << endl;
           }
           else{
                  int k = abs(a-b);
                  while(k > 0){
                       if(k>= 10){
                           int p = k/10;
                           count+=p;
                           k = k%10;
                       }
                       else if(k==9){
                        int t = k/9;
                           count+=t;
                            k = k%9;
                       }
                       else if(k==8){
                            int l = k/8;
                           count+=l;
                            k = k%8;
                       }
                       else if(k==7){
                            int o = k/7;
                           count+=o;
                            k = k%7;
                       }
                       else if(k==6){
                           int g = k/6;
                           count+=g;
                            k = k%6;
                       }
                       else if(k==5){
                            int w = k/5;
                           count+=w;
                            k = k%5;
                       }
                        else if(k==4){
                            int f = k/4;
                           count+=f;
                            k = k%4;
                       }
                        else if(k==3){
                            int s = k/3;
                           count+=s;
                            k = k%3;
                       }
                        else if(k==2){
                            int x = k/2;
                           count+=x;
                            k = k%2;
                       }
                        else if(k==1){
                           int z = k/1;
                           count+=z;
                            k = k%1;
                       }
                  }
                  cout << count << endl;
           }
        }
   return 0;
}