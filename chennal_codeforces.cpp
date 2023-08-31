#include<bits/stdc++.h>
 
#define endl '\n'
#define ll long long
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
using namespace std;
 
 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    ll n,a,q;
    //ll w=a;
    cin>>n>>a>>q;
    ll w=a;
    string s;
    cin>>s;
    ll ans=a;
    ll cnt1=0;
    for(int i=0;i<q;i++)
    {
      if(s[i]=='-')
      {
        w--;
      }
      if(s[i]=='+')
      {
        cnt1++;
        w++;
      }
      ans=max(w,ans);
    }
    if(ans>=n)
    {
      cout<<"YES"<<endl;
    }
    else if((cnt1+a)>=n)
    {
      cout<<"MAYBE"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
}