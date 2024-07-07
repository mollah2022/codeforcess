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
               tst{
                         string s1; cin >> s1;
                         int a = s1[0]-'0';
                         int b = s1[1]-'0';
                         int x = (a*10)+b;
                         int c = s1[3]-'0';
                         int d = s1[4]-'0';
                         int y = (c*10)+d;
                         if(x==0 && y>=10){
                              cout <<"12"<<":"<<y<<" AM"<<endl;
                              continue;
                         }
                         else if(x==0 && y<10){
                                cout <<"12"<<":"<<"0"<<y<<" AM"<<endl;
                              continue;
                         }

                         if(x==12 && y>=10){
                             cout <<"12"<<":"<<y<<" PM"<<endl;
                              continue;

                         }
                         else if(x==12 && y<10){
                                cout <<"12"<<":"<<"0"<<y<<" PM"<<endl;
                              continue;
                         }
                         if(x>=1 && x<=11 && y<=59){
                                  if(x<10 && y>=10){
                                       cout << "0" << x <<":"<<y<<" AM\n";
                                  }
                                 else if(y<10 && x>=10){
                                      cout << x <<":"<< "0" <<y<<" AM"<<endl;
                                  }
                                  else if(y<10 && x<10){
                                       cout <<"0"<<x<<":"<<"0"<<y<<" AM\n";
                                  }
                                  else{
                                       cout <<  x <<":"<<y<<" AM\n";
                                  }

                         }
                         else{
                                   int z = (x-12);
                                    if(z<10 && y>=10){
                                       cout << "0" << z <<":"<<y<<" PM\n";
                                  }
                                  else if(y<10 && z>=10){
                                      cout << z <<":"<< "0" <<y<<" PM"<<endl;
                                  }
                                  else if(y<10 && z<10){
                                       cout <<"0"<<z<<":"<<"0"<<y<<" PM\n";
                                  }
                                  else{
                                      cout <<  z <<":"<<y<<" PM\n";
                                  }
                         }
               }
  return 0;
}