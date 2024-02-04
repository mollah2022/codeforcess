#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST 
              int n; cin >> n;
                if(n<2){
                      cout <<-1<<endl;
                      return 0;
                }
                if(n==2){
                      cout << 2 <<" "<<2<<endl;
                      return 0;
                }
                  if(n==3){
                      cout << 3 <<" "<<3<<endl;
                      return 0;
                }
              vector<int>v1;
              for(int i=1;i<=n;i++){
                   if(i%2==0){
                      v1.push_back(i);
                   }
              } 
              int  l = v1.size();
              cout << v1[l-1] <<" "<<v1[0]<<endl; 
     return 0;
}