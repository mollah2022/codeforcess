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
                tst{
                        int n; cin >> n;
                        vector<int>v1;
                        while(n--){
                            int cnt  = 0;
                                 string s1; cin >> s1;
                                 for(int i=0;i<s1.size();i++){
                                       if(s1[i]=='1'){
                                            cnt++;
                                       }
                                 }
                                 if(cnt!=0){
                                      v1.push_back(cnt);
                                 }
                        }
                        bool find = false;
                        for(int i=0;i<v1.size()-1;i++){
                             //  cout << v1[i] <<" ";
                            if(v1[i]!=v1[i+1]){
                                  find = true;
                                  break;
                            }
                        }
                        if(find == false){
                              cout <<"SQUARE\n";
                        }
                        else{
                             cout <<"TRIANGLE\n";
                        }
                }
  return 0;
}