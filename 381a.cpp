//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST()
             int n; cin >> n;
             vector<int>v1;
             for(int i=0;i<n;i++){
                    int a; cin >> a;
                    v1.push_back(a);
             }
             int sereja = 0;
             int dima = 0;
             for(int i=0;i<v1.size();i++){
                  if(i%2==0){
                         int a = v1[i];
                         int ln1 = v1.size()-1;
                         int b = v1.back();
                         if(a>b){
                               sereja+=a;
                               v1.erase(v1.begin()+i);
                         }
                         else{
                                sereja+=b;
                                v1.erase(v1.begin()+ln1);
                         }
                  }
                  else{
                             int c = v1[i];
                             int ln2 = v1.size()-1;
                             int d = v1.back();
                             if(c>d){
                                   dima +=c;
                                   v1.erase(v1.begin()+i);
                             }
                             else{
                                    dima +=d;
                                    v1.erase(v1.begin()+ln2);
                             }
                  }
             }
             cout << sereja << " " << dima << endl;
  return 0;
}