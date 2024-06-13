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
           string s1; cin >> s1;
           bool find = false;
           for(int i=0;i<s1.size();i++){
            if(s1[i]=='+'){
                   cin >> s1;
            }
                 else if(s1[i]=='H' || s1[i]=='Q' || s1[i]=='9'){
                        find = true;
                        break;
                  }
           }
           if(find==true){
               yes
           }
           else{
                no
           }
  return 0;
}