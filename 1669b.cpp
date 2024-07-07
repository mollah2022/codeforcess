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
                         int a1[n];
                         for(int i=0;i<n;i++) cin >> a1[i];
                            sort(a1,a1+n);
                    int cnt = 1;
                    bool find = false;
                    int g = 0;
                    for(int i=0;i<n;i++){
                            if(a1[i]==a1[i+1]){
                                    cnt++;
                                    if(cnt==3){
                                        find = true;
                                        g = a1[i];
                                          break;
                                    }
                            }
                            else{
                                  cnt = 1;
                            }
                    }
                    if(find==true){
                            cout << g << endl;
                    }
                    else{
                           cout <<-1 << endl;
                    }
                }
  return 0;
}