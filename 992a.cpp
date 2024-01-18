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
                  list<int>li;
                  for(int i=0;i<n;i++){
                       int y; cin >> y;
                       li.push_back(y);
                  }
                   li.sort();
                   li.unique();
                 int count = 0;
                  for(auto it : li){
                        if(it!=0){
                             count++;
                        }
                  }
                  cout << count << endl;
                  
     return 0;
}