#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int32_t main() {
         sajib
           int t; cin >> t;
           while(t--){
                int n; cin >> n;
                string s1; cin >> s1;
                int count = 0; 
               // cout << s1[1] << endl;             
                      
                         if(s1[0]=='A'){count++;}
                         if( s1[2]=='B'){count++;}
                         if(s1[5]=='C'){count++;}
                         if(s1[9]=='D'){count++;} 
                         if(s1[14]=='E'){count++;}
                         if(s1[20]=='F'){count++;}
                         if(s1[27]=='G'){count++;}
                         if(s1[35]=='H'){count++;}
                         if(s1[44]=='I'){count++;} 
                         if(s1[54]=='J'){count++;}
                         if(s1[65]=='K'){count++;}
                         if(s1[77]=='L'){count++;}
                         if(s1[91]=='M'){count++;}
                         if(s1[105]=='N'){count++;} 
                         if(s1[119]=='O'){count++;}
                         if(s1[135]=='P'){count++;}
                         if(s1[152]=='Q'){count++;}
                         if(s1[170]=='R'){count++;}
                         if(s1[189]=='S'){count++;}                       
                         if(s1[209]=='T'){count++;}
                         if(s1[230]=='U'){count++;}
                         if(s1[252]=='V'){count++;}
                         if(s1[275]=='W'){count++;}
                        if(s1[299]=='X'){count++;} 
                         if(s1[324]=='Y'){count++;}
                         if(s1[350]=='Z'){count++;} 
                           
                cout << count << endl;
                count = 0;
           }
    return 0;
}