#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
             int t = 3;
             int a=0,b=0,c=0;
             while(t--){
                   string s1; cin >> s1;
                   if(s1[0]=='A'&&s1[1]=='>'&&s1[2]=='B'
                    ||s1[0]=='A'&&s1[1]=='>'&&s1[2]=='C'
                    || s1[0]=='B'&&s1[1]=='<'&&s1[2]=='A'
                    || s1[0]=='C'&&s1[1]=='<'&&s1[2]=='A' ){
                       a++;
                   }
                   else  if(s1[0]=='B'&&s1[1]=='>'&&s1[2]=='A'
                    ||s1[0]=='B'&&s1[1]=='>'&&s1[2]=='C'
                    || s1[0]=='A'&&s1[1]=='<'&&s1[2]=='B'
                    || s1[0]=='C'&&s1[1]=='<'&&s1[2]=='B' ){
                       b++;
                   }
                   else{
                       c++;
                   }
             }
             //cout << a<<" "<<b<<" "<<c<<" ";
             if(a==b && b==c){
                 cout <<"Impossible\n";
             }
             else if(a<b&&a<c){
                   cout <<"A";
                   if(b<c){
                      cout<<"BC";
                   }
                   else{
                      cout<<"CB";
                   }
             }
             else if(b<a&&b<c){
                 cout << "B";
                 if(a<c){
                      cout<<"AC";
                   }
                   else{
                      cout<<"CA";
                   }
             }
             else{
                  cout << "C";
                  if(b<a){
                      cout<<"BA";
                   }
                   else{
                      cout<<"AB";
                   }
             }

  return 0;
}