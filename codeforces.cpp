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
                int n,m; cin >> n >> m;
                int a1[n][m];
                for( int i = 0 ; i < n ; i++ ){
                    for( int j = 0; j < m ; j++ ){
                             cin >> a1[i][j];
                    }
                }
                   int x; cin >> x;
                   bool find = false;
                   for(int i = 0 ; i < n ; i++ ){
                        for( int j = 0 ; j < m ; j++ ){
                                if(a1[i][j]==x){
                                       find = true;
                                       //cout << a1[i][j] << endl;
                                       break;
                                }
                        }
                   }

                   if(find == 1){
                         cout <<"will not take number\n";
                   }
                   else{
                       cout <<"will take number\n";
                   }
  return 0;
}