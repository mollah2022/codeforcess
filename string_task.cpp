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
             string s1; cin >> s1;
             char ch;
             string s2 = "";
             for(int i=0;i<s1.size();i++){
                   ch = tolower(s1[i]);
                   s2+=ch;
             }
           //  sort(s2.begin(),s2.end());
             string s3 = "";
             string s4 = "";
             for(int i=0;i<s2.size();i++){
                   if( s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u' || s2[i]=='y'){
                        s3+=s2[i];
                   }
                   else{
                        s4+=s2[i];
                   }
                   
             }
             for(int i=0;i<s4.size();i++){
                   cout << "." << s4[i];
             }
             cout << endl;
  return 0;
}