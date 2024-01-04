#include<iostream>
#include<vector>
using namespace std;
int32_t main(){
    
          int t; cin >> t;
          while(t--){
            vector < long long > v1;
            long long sum = 0;
            long long found = 0;
           long long a,b; cin >> a >> b;
              long long n1=0,n2=0,n3=0,n4=0;
              for(long long i=1;i<=a;i++){
                  n1 = i;
                  n2 = b*n1;
                  n3 = n2*b;
                  n4 = n3*b;
                    sum = (n1+n2+n3+n4);
                    if(sum==a){
                     v1.push_back(n1);
                     v1.push_back(n2);
                     v1.push_back(n3);
                     v1.push_back(n4);
                       found  = 1;
                       break;
                    }
                    else{
                       sum=0;
                    }
              }
              for(long long i=0;i<v1.size();i++){
                 cout << v1[i] << " ";
              }
              cout << endl;
              v1.clear();
          }
   return 0;
}