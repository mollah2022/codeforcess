#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";

int32_t main(){
           FAST
            tst{
                   int n; cin >> n;
                   int a1[n];
                   ll sum = 0;
                   for(int i=0;i<n;i++){
                        cin >> a1[i];
                        sum+=a1[i];
                   }
                   if(sum%3==0){
                       cout <<0<< endl;
                       continue;
                   }
                   ll ans = sum,cnt=0;
                   bool mafia = false;
                   sort(a1,a1+n);
                   for(int i=0;i<n;i++){
                         ans-=a1[i];
                         if(ans%3==0){
                            cnt++;
                            mafia = true;
                            break;
                         }
                         else{
                            ans+=a1[i];
                         }
                   }
                   
                   int count = 0;
                   while(sum%3!=0){
                        sum=sum+1;
                        count++;
                   }
              //cout << min(value,count << endl;
                   if(mafia == true){
                       cout << 1 << endl;
                   }
                   else{
                      cout << count << endl;
                   }
            }
  return 0;
}