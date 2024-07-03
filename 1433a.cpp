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
                      int cnt = 0;
                      if(s1[0]=='1'){
                              for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='1'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 1 << endl;
                              }
                              else if(cnt==2){
                                   cout << 3 << endl;
                              }
                              else if(cnt==3){
                                  cout << 6 << endl;
                              }
                              else{
                                       cout << 10 << endl;
                              }
                      }
                      else if(s1[0]=='2'){
                        for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='2'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 11 << endl;
                              }
                              else if(cnt==2){
                                   cout << 13 << endl;
                              }
                              else if(cnt==3){
                                  cout << 16 << endl;
                              }
                              else{
                                       cout << 20 << endl;
                              }
                      }
                       else if(s1[0]=='3'){
                        for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='3'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 21 << endl;
                              }
                              else if(cnt==2){
                                   cout << 23 << endl;
                              }
                              else if(cnt==3){
                                  cout << 26 << endl;
                              }
                              else{
                                       cout << 30 << endl;
                              }
                      }
                       else if(s1[0]=='4'){
                        for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='4'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 31 << endl;
                              }
                              else if(cnt==2){
                                   cout << 33 << endl;
                              }
                              else if(cnt==3){
                                  cout << 36 << endl;
                              }
                              else{
                                       cout << 40 << endl;
                              }
                      }
                       else if(s1[0]=='5'){
                        for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='5'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 41 << endl;
                              }
                              else if(cnt==2){
                                   cout << 43 << endl;
                              }
                              else if(cnt==3){
                                  cout << 46 << endl;
                              }
                              else{
                                       cout << 50 << endl;
                              }
                      }
                       else if(s1[0]=='6'){
                        for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='6'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 51 << endl;
                              }
                              else if(cnt==2){
                                   cout << 53 << endl;
                              }
                              else if(cnt==3){
                                  cout << 56 << endl;
                              }
                              else{
                                       cout << 60 << endl;
                              }
                        }
                               else if(s1[0]=='7'){
                        for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='7'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 61 << endl;
                              }
                              else if(cnt==2){
                                   cout << 63 << endl;
                              }
                              else if(cnt==3){
                                  cout << 66 << endl;
                              }
                              else{
                                       cout << 70 << endl;
                              }
                      }
                       else if(s1[0]=='8'){
                        for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='8'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 71 << endl;
                              }
                              else if(cnt==2){
                                   cout << 73 << endl;
                              }
                              else if(cnt==3){
                                  cout << 76 << endl;
                              }
                              else{
                                       cout << 80 << endl;
                              }
                      }
                       else if(s1[0]=='2'){
                        for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='2'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 11 << endl;
                              }
                              else if(cnt==2){
                                   cout << 13 << endl;
                              }
                              else if(cnt==3){
                                  cout << 16 << endl;
                              }
                              else{
                                       cout << 20 << endl;
                              }
                      } else if(s1[0]=='9'){
                        for(int i=0;i<s1.size();i++){
                                   if(s1[i]=='9'){
                                        cnt++;
                                   }
                              }
                              if(cnt==1){
                                  cout << 81 << endl;
                              }
                              else if(cnt==2){
                                   cout << 83 << endl;
                              }
                              else if(cnt==3){
                                  cout << 86 << endl;
                              }
                              else{
                                       cout << 90 << endl;
                              }
                      }
              }
  return 0;
}