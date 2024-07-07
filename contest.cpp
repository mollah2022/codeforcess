
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
               int n,m,k; cin >> n >> m >> k;
               vector<int>v1;
               for(int i=0;i<n;i++){
               	    int a; cin >> a;
               	    v1.push_back(a);
               }
               m = m-1;
               for(int i=0;i<v1.size();i++){
               	   if(i==m){
               	   	    
               	   	     cout << v1[i] <<" ";
               	   	      cout <<k<<" ";
               	   }
               	   else{
               	   	   cout << v1[i] <<" ";
               	   }
               }
               cout << endl;
  return 0;
}