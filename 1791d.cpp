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
                     int n; cin >> n;
                     string s1; cin >> s1;
                     //sort(s1.begin(),s1.end());
                     int a1[26];
                     for(int i=0;i<26;i++){
                          a1[i] = 0;
                     }
                     for(int i=0;i<s1.size();i++){
                           if(s1[i]=='a'){
                               a1[0]++;
                           }
                           else if(s1[i]=='b'){
                                a1[1]++;
                              }
                     else if(s1[i]=='c'){
                                a1[2]++;
                           }
                           else if(s1[i]=='d'){
                                a1[3]++;
                           }
                           else if(s1[i]=='e'){
                                a1[4]++;
                           }
                           else if(s1[i]=='f'){
                                a1[5]++;

                           }
                           else if(s1[i]=='g'){
                                a1[6]++;
                           }
                           else if(s1[i]=='h'){
                                a1[7]++;
                           }
                           else if(s1[i]=='i'){
                                a1[8]++;
                           }
                           else if(s1[i]=='j'){
                                a1[9]++;
                           }
                           else if(s1[i]=='k'){
                                a1[10]++;
                           }
                           else if(s1[i]=='l'){
                                a1[11]++;
                           }
                           else if(s1[i]=='m'){
                                a1[12]++;
                           }
                           else if(s1[i]=='n'){
                                a1[13]++;
                           }
                           else if(s1[i]=='o'){
                                a1[14]++;
                           }
                           else if(s1[i]=='p'){
                                a1[15]++;
                           }
                           else if(s1[i]=='q'){
                                a1[16]++;
                           }
                           else if(s1[i]=='r'){
                                a1[17]++;
                           }
                           else if(s1[i]=='s'){
                                a1[18]++;
                           }
                           else if(s1[i]=='t'){
                                a1[19]++;
                           }
                           else if(s1[i]=='u'){
                                a1[20]++;
                           }
                           else if(s1[i]=='v'){
                                a1[21]++;
                           }
                           else if(s1[i]=='w'){
                                a1[22]++;
                           }
                            else if(s1[i]=='x'){
                                a1[23]++;
                           }
                           else if(s1[i]=='y'){
                                a1[24]++;
                           }
                           else if(s1[i]=='z'){
                                a1[25]++;
                           }      
                    }

                           for(int i=0;i<26;i++){
                                  if(a1[i]>2){
                                      a1[i]=2;
                                  }
                           }  
                           int sum = 0;
                           for(int i=0;i<26;i++){
                               sum+=a1[i];
                           }   
                           cout << sum << endl;
             }
  return 0;
}