#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
         FAST
             int n,m; cin >> n >> m;
             vector < int > v1,v2,v3;
             for(int i=0;i<n;i++){
                   int y; cin >> y;
                   v1.push_back(y);
                   v2.push_back(y);
             }  

             sort(v1.begin(),v1.end());
             int count = 0;
             for(int i=0;i<v1.size();i++){
                   if(v1[i]!=v1[i+1]){
                       count++;
                   }
             }
            
             //cout << count << endl;
             if(count<m){
                  cout << "NO\n";
                  return 0;
             }
             for(int i=0;i<v1.size();i++){
                    if(v1[i]==v1[i+1]){
                          v1.erase(v1.begin()+i);
                    }
             }
            cout << "YES\n";
           // cout << 1 <<" ";
            for(int i=0;i<v1.size();i++){

                for(int j=0;j<v2.size();j++){
                        if(v1[i]==v2[j]){
                             v3.push_back(j);
                             break;
                       }
                }
                       
            }
            sort(v3.begin(),v3.end());
            for(int i=0;i<m;i++){
                  cout << v3[i]+1 <<" ";
            }
            cout << endl;

     return 0;
}