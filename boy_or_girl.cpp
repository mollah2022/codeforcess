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
             string s1; cin >> s1;
             int ln = s1.size();
             list < char > li;
             for(int i=0;i<ln;i++){
                  li.push_back(s1[i]);
             }
             li.sort();
             li.unique();
             int ln2 = li.size();
            // cout << ln2  << endl;
             if(ln2%2==0){
                   cout <<"CHAT WITH HER!\n";
             }
             else{
                   cout <<"IGNORE HIM!\n";
             }

  return 0;
}