#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
             int t; cin >> t;
             while(t--){
                   string s1;  cin >> s1;
                   string s2="";
                   string s3="";
                   if(s1[0]=='0'){
                        cout << -1 << endl;
                        continue;
                   }
                   int p = 0;
                      s2+=s1[0];
                   for(int i=1;i<s1.size();i++){
                        if(s1[i]!='0'){
                             p = i;
                             break;
                        }
                        else{
                              s2+=s1[i];
                        }
                   }
                   for(int i=p;i<s1.size();i++){
                       s3+=s1[i];
                   }
                   //cout << s2 <<" "<< s3 << endl;
                   int a = stoi(s2);
                   int b = stoi(s3);
                   if(a>=b){
                        cout << -1 << endl;
                   }
                   else{
                      cout << a << " " << b << endl;
                   }
             }
    return 0;
}