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
                       int m; cin >> m;
                       v1.push_back(m);
                }
                int Sereja = 0, Dima = 0;
                int a = 0,b = 0;
                for(int i=0;i<n;i++){
                         a = *v1.begin();
                         b = v1.back();
                       // cout << a <<" "<<b<<endl;
                        if(i%2==0){
                                  if(a>=b){
                             Sereja+=a;
                             v1.erase(v1.begin());
                        }
                        else{
                               Sereja+=b;
                               v1.pop_back();
                        }
                    }
                    else{
                             if(a>=b){
                             Dima+=a;
                             v1.erase(v1.begin());
                        }
                        else{
                               Dima+=b;
                               v1.pop_back();
                        }

                    }
            }
            cout << Sereja << " " << Dima << endl;
  return 0;
}