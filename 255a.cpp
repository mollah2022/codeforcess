//Bismillahir Rahmanir Rahim
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
           int a1[n];
           for(int i=0;i<n;i++){
              cin >> a1[i];
           }
           std::vector<int> v1;
           std::vector<int> v2;
           std::vector<int> v3;
           for(int i=0;i<n;i=i+3){
              v1.push_back(a1[i]);
           }
           for(int i=1;i<n;i=i+3){
              v2.push_back(a1[i]);
           }
           for(int i=2;i<n;i=i+3){
              v3.push_back(a1[i]);
           }
           int mx1 = 0;
           for(int i=0;i<v1.size();i++){
               mx1+=v1[i];
           }
             int mx2 = 0;
            for(int i=0;i<v2.size();i++){
               mx2 +=v2[i];
           }
             int mx3 = 0;
            for(int i=0;i<v3.size();i++){
               mx3 +=v3[i];
           }
           if(mx1 > mx2 && mx1 > mx3){
               cout <<"chest\n";
           }
           else if(mx2>mx1 && mx2>mx3){
                cout <<"biceps\n";
           }
           else{
                 cout <<"back\n";
           }
          // cout << mx1 << " "<<mx2 <<" "<<mx3<<endl;
  return 0;
}