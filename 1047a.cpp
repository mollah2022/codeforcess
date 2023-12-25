#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int n; cin >> n;
                  if(n%2==0){
                      //cout << 1<<" "<<2<<" "<<(n-3)<<endl;
                    if((n-3)%3==0){
                           cout <<1<<" "<<1<<" "<<(n-2)<<endl;
                    }
                    else{
                        cout << 1<<" "<<2<<" "<<(n-3)<<endl;
                    }
                  }
                  else{
                    //cout <<1<<" "<<2<<" "<<(n-3)<<endl;
                        if((n-2)%3==0){
                              cout << 1<<" "<<2<<" "<<(n-3)<<endl;
                        }
                        else{
                            cout <<1<<" "<<1<<" "<<(n-2)<<endl;
                        }
                  }
               return 0;
}