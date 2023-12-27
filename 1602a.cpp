#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t,i; cin >> t;
             while(t--){
                int mn = INT_MAX;
                int value = 0;
                   string s1; cin >> s1;
                   for(int i=0;i<s1.size();i++){
                          int a = s1[i]-'0';
                          //int b = s1[i+1]-'0';
                          mn = min(mn,a);
                         // value = i;
                   }
                   //cout << mn <<" "<<value<< endl;
                   char ch = mn+'0';
                  // cout << ch << endl;
                   for(int i=0;i<s1.size();i++){
                       if(s1[i]==ch){
                          value=i;
                          break;
                       }
                   }
                   //cout << value << endl;
                   s1.erase(s1.begin()+value);
                   cout << ch <<" "<<s1<<endl;
             }
    return 0;
}