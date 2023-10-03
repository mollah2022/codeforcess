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
           int n1; cin >> n1;
           int count = 0;
           int ans = 0, result = 0;
           int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i1=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
           string s1; cin >> s1;
           sort(s1.begin(),s1.end());
           for(int i=0;i<n1;i++){
                 if(s1[i]=='A'){
                    a++;
                    if(a==1){
                     count++;
                    }
                 }
                 else if(s1[i]=='B'){
                       b++;
                        if(b==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='C'){
                          c++;
                           if(c==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='D'){
                          d++;
                           if(d==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='E'){
                           e++;
                            if(e==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='F'){
                          f++;
                           if(f==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='G'){
                          g++;
                           if(g==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='H'){
                        h++;
                         if(h==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='I'){
                       i1++;
                          if(i1==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='J'){
                           j++;
                            if(j==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='K'){
                         k++;
                            if(k==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='L'){
                          l++;
                           if(l==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='M'){
                           m++;
                            if(m==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='N'){
                           n++;
                            if(n==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='O'){
                          o++;
                           if(o==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='P'){
                           p++;
                            if(p==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='Q'){
                            q++;
                             if(q==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='R'){
                            r++;
                             if(r==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='S'){
                            s++;
                             if(s==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='T'){
                         t++;
                          if(t==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='U'){
                         u++;
                          if(u==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='V'){
                           v++;
                            if(v==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='W'){
                           w++;
                            if(w==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='X'){
                           x++;
                            if(x==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='Y'){
                           y++;
                            if(y==1){
                     count++;
                    }
                 }
                  else if(s1[i]=='Z'){
                        z++;
                         if(z==1){
                     count++;
                    }
                 }
           }
        //   cout << count << endl;
           result = n1-count;
           cout << (2*count)+result << endl;
       }
   return 0;
}