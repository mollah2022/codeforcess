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
                    string s1; cin >> s1;
                    int br = 0;
                    reverse(s1.begin(),s1.end());
                   // cout << s1 << endl;
                    for(int i=0;i<s1.size();i++){
                           if(s1[i]!=')'){
                                break;
                           }
                           else{
                             br++;
                           }
                    }
                    int  l = n-br;
                   // cout << br << endl;
                    if(br>l){
                        cout <<"Yes\n";
                    }
                    else{
                        cout << "No\n";
                    }
              } 
     return 0;
}