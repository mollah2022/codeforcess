#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
            tst{
                int n; cin >> n;
                vector < int > v1;
                for(int i=0;i<n;i++){
                    int m; cin >> m;
                    v1.push_back(m);
                }             
                int count = 0;
                vector<int>::iterator it,it1;
                for(int i=0;i<v1.size()-1;i++){
                      if((v1[i]%2!=0 && v1[i+1]%2!=0) || (v1[i]%2==0 && v1[i+1]%2==0)){
                           int temp = (v1[i]*v1[i+1]);
                           int h = i+1;
                           it=v1.begin()+i;
                           it1=v1.begin()+h;
                           v1.erase(it,it1);
                           it = v1.begin()+i;
                           v1.insert(it,temp);
                           count++;
                      }
                }
                cout << count << endl;

            }      
     return 0;
}