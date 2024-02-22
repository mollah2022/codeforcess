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
                   vector<int>v1,v2;
                   bool pagol = false;
                   //int n = k;
                   while(n--){
                       string s1; cin >> s1;
                       int one = 0;
                       for(int i=0;i<s1.size();i++){
                            if(s1[i]=='0'){
                                  one++;
                            }
                       }
                       v1.push_back(one);
                   }
                   int count = 0;
                   for(int i=0;i<v1.size();i++){       
                             if(v1[i]!='0'){
                                  count++;
                                  int q = 0;
                             int p = v1[i];
                             int w = v1[i+1];
                                q = abs(p-w);
                                if(q==0){
                                    v2.push_back(q);
                                }
                             }
                   }
                   int l = v2.size();
                   if(count==l){
                       cout <<"SQUARE\n";
                   }
                   else{
                      cout <<"TRIANGLE\n";
                   }

             }
  return 0;
}