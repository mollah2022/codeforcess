#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST  
             tst{
                   int n; cin >> n;
                   int l = 0;
                   int r = 0;
                   string s1; cin >> s1;
                   for(int i=0;i<s1.size();i++){
                       if(s1[i]=='B'){
                            l = i;
                            break;
                       }
                   }
                     for(int i=s1.size()-1;i>=0;i--){
                       if(s1[i]=='B'){
                            r = i;
                            break;
                       }
                   }
                   cout << (r-l)+1 << endl;
             } 
     return 0;
}