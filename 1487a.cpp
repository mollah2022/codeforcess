#include<bits/stdc++.h>
#include<algorithm>
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
                vector<int>v1;
                for(int i=0;i<n;i++){
                       int y; cin >> y;
                       v1.push_back(y);
                }
                sort(v1.begin(),v1.end());
                reverse(v1.begin(),v1.end());
                int count = 0;
                for(int i=0;i<v1.size();i++){
                       for(int j=i+1;j<v1.size();j++){
                           if(v1[i]>v1[j]){
                               count++;
                               break;
                           }
                       }
                       
                }  
                cout << count<< endl; 
                count = 0;  
                //cout << v2.size() << endl;     
            }
     return 0;
}