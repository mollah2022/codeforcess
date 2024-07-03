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
               int a1[] = {1,2,3,4,5,6};
               int n,m; cin >> n >> m;
               int mx = max(n,m);
               int cnt = 0;
               for(int i=0;i<6;i++){
                    if(a1[i]>=mx){
                           cnt++;
                    }
               }
               if(cnt==6){
                   cout <<"1/1"<<endl;
               }
             else  if(cnt==5){
                    cout <<"5/6"<<endl;
               }
            else   if(cnt==4){
                      cout <<"2/3"<<endl;
               }
             else  if(cnt == 3){
                    cout << "1/2" << endl;
               }
               else if(cnt==2){
                   cout << "1/3" << endl;
               }
               else if(cnt==1){
                   cout <<"1/6" << endl;
               }
               else{
                   cout <<"0/1"<<endl;
               }
  return 0;
}