#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
           int n,m,k; cin >> n >> m >> k;
           int a1[n];
           int ex = 0;
           vector<int>v1,v2;
           for(int i=0;i<n;i++){
                 cin >> a1[i];
                 if(a1[i]<=k && a1[i]!=0){
                     ex = i+1;
                 }
           }
           //cout << ex << endl;
           ex = abs(m-ex);
           ex = (ex*10);
           for(int i=0;i<m-1;i++){
               v1.push_back(a1[i]);
           }
            for(int i=m;i<n;i++){
               v2.push_back(a1[i]);
           }
           int f = 0,l = 0;
           for(int i=0;i<v1.size();i++){
                 if(v1[i]<=k && v1[i]!=0){
                      f = i+1;
                 }
           }
            for(int i=0;i<v2.size();i++){
                 if(v2[i]<=k && v2[i]!=0){
                    l = i+m+1;
                    break;
                 }
           }
           //cout << f<<" "<<l<<endl;
           int a = m-f;
           int b = l-m;
           if(a<b && f!=0){
               cout << abs(f-m)*10<<endl;
           }
           else if(l!=0){
                cout << abs(l-m)*10 << endl;
           }
           else{
                cout << ex << endl;
           }

  return 0;
}