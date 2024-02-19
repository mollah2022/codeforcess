#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST   
             string s1;
             getline(cin , s1);
             reverse(s1.begin(),s1.end());
             int l = s1.size();
             char ch;
              for(int i=0;i<s1.size();i++){
                  if( s1[i]>='a' && s1[l]<='z' ||s1[i]>='A' && s1[l]<='Z'){
                       ch +=s1[i];
                       break;
                  }
              }
              //cout << ch << endl;
             if( ch=='a' || ch=='e' || ch=='i' || ch=='o' ||
                ch=='u' || ch=='y' || ch=='A' || ch=='E' || ch=='I' || ch=='O' ||
                ch=='U' || ch=='Y'){
                   yes
             }
             else{
                no
             }
     return 0;
}