//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
           vector<string>v1,v2;
           tst{
               string s1; cin >> s1;
               if(s1=="purple"){
                   v1.push_back("Power");
               }
               else if(s1=="green"){
                   v1.push_back("Time");
               }
               else if(s1=="blue"){
                   v1.push_back("Space");
               }
               else if(s1=="orange"){
                  v1.push_back("Soul");
               }
               else if(s1=="red"){
                   v1.push_back("Reality");
               }
               else{
                   v1.push_back("Mind");
               }
           }
           //sort(v1.begin(),v1.end());
            //int a = v1.size(); 
            //int b = v2.size();  

            //cout << b-a << endl;
            for(int i=a;i<v2.size();i++){
                  cout << v2[i] << endl;
            } 
  return 0;
}