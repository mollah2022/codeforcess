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
             int count = 0;
              tst{
                      int arr1[3];
                      for(int i=0;i<3;i++){
                            cin >> arr1[i];
                      }
                      int value  = 0;
                      for(int i=0;i<3;i++){
                              if(arr1[i]==1){
                                   value++;
                              }
                      }
                      if(value>=2){
                           count++;
                      }
                      else{
                           value=0;
                      }
              }
                cout << count << endl;
  return 0;
}