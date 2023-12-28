#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t;while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
        FAST
            tst{
                string s1,s2,s3; cin >> s1 >> s2 >> s3;
                string a = s1+s2+s3;
                //cout << a << endl;
                int z1=0,z2=0,z3=0;
                //sort(a.begin(),a.end());
                for(int i=0;i<a.size();i++){
                        if(a[i]=='A'){
                             z1++;
                        }
                        else if(a[i]=='B'){
                                z2++;
                        }
                        else if(a[i]=='C'){
                                z3++;
                        }
                }
                //cout << z1 <<endl << z2 << endl << z2 << endl;
                if(z1==2){
                        cout << 'A' << endl;
                }
                else if(z2==2){
                        cout << 'B' << endl;
                }
                else if(z3==2){
                        cout << "C" << endl;
                }
                z1=0,z2=0,z3=0;
               
            } 
     return 0;
}