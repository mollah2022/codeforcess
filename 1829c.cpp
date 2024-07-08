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
                            int  n; cin >> n;
                            std::vector<int> v1,v2,v3;
                            while(n--){
                                     int m; cin >> m;
                                     string s1; cin >> s1;
                                    if(s1[0]=='1' && s1[1]=='1'){
                                           v1.push_back(m);
                                    }
                                    else if(s1[0]=='1' && s1[1]=='0'){
                                          v2.push_back(m);
                                    }
                                    else if(s1[0]=='0' && s1[1]=='1'){
                                        v3.push_back(m);
                                    }
                                   // cout << s1[0] << " " << s1[1] << endl;
                            }
                            int mn1=INT_MAX,mn2=INT_MAX,mn3=INT_MAX;
                            for(int i=0;i<v1.size();i++){
                                  mn1 = min(mn1,v1[i]);
                            }
                            for(int i=0;i<v2.size();i++){
                                  mn2 = min(mn2,v2[i]);
                            }
                            for(int i=0;i<v3.size();i++){
                                  mn3 = min(mn3,v3[i]);
                            }
                       //     cout << mn1<<" "<<mn2<<" "<<mn3<<endl;
                            int ans = mn2+mn3;
                     int a = v1.size();
                     int b = v2.size();
                     int c = v3.size();
                     if(a==0 && b==0 && c==0 ||a==0&&  b==0 && c!=0 || a==0 && b!=0 && c==0){
                            cout <<"-1\n";
                     }
                     else if(b==0 || c==0){
                          cout << mn1 << endl;
                     }
                     else{
                           cout << min(ans,mn1) << endl;
                     }
                }
  return 0;
}