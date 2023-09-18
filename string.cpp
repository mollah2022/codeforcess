#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define sajib ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;
#ifndef ONLINE_JUDGE
#else
#define dbg(x...)
#endif
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
   return uniform_int_distribution<int>(l, r) (rng);
}

int32_t main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    tst{
      string s1; cin >> s1;
      sort(s1.begin(),s1.end());
      int counta=0,countb=0,countc=0,countd=0,counte=0,countf=0,countg=0,counth=0,counti=0,countj=0,countk=0,countl=0,countm=0,countn=0,counto=0,countp=0,countq=0,countr=0,counts=0,countt=0,countu=0,countv=0,countw=0,countx=0,county=0,countz=0;
      for(int i=0;i<s1.size();i++){

         if(s1[i]=='A'){
             counta++;
         }
         else if(s1[i]=='B'){
           countb++;
         }
           else if(s1[i]=='C'){
            countc++;
         }
           else if(s1[i]=='D'){
            countd++;
         }
           else if(s1[i]=='E'){
            counte++;
         }
           else if(s1[i]=='F'){
            countf++;
         }
           else if(s1[i]=='G'){
            countg++;
         }
           else if(s1[i]=='H'){
            counth++;
         }
           else if(s1[i]=='I'){
            counti++;
         }
           else if(s1[i]=='J'){
            countj++;
         }
           else if(s1[i]=='K'){
            countk++;
         }
           else if(s1[i]=='L'){
            countl++;
         }
           else if(s1[i]=='M'){
            countm++;
         }
           else if(s1[i]=='N'){
            countn++;
         }
           else if(s1[i]=='O'){
            counto++;
         }
           else if(s1[i]=='P'){
            countp++;
         }
           else if(s1[i]=='Q'){
            countq++;
         }
           else if(s1[i]=='R'){
            countr++;
         }
           else if(s1[i]=='S'){
            counts++;
         }
           else if(s1[i]=='T'){
            countt++;
         }
           else if(s1[i]=='U'){
            countu++;
         }
           else if(s1[i]=='V'){
            countv++;
         }
           else if(s1[i]=='W'){
            countw++;
         }
           else if(s1[i]=='X'){
            countx++;
         }
           else if(s1[i]=='Y'){
            county++;
         }
           else if(s1[i]=='Z'){
            countz++;
         }

      }
      if(counta==1){
         cout<<"A";
      }
      else{
         cout<<"A"<<counta;
      }
       if(countb==1){
         cout<<"B";
      }
      else{
         cout<<"B"<<countb;
      }
       if(countc==1){
         cout<<"C";
      }
      else{
         cout<<"C"<<countc;
      }
       if(countd==1){
         cout<<"D";
      }
      else{
         cout<<"D"<<countd;
      }
       if(counte==1){
         cout<<"E";
      }
      else{
         cout<<"E"<<counte;
      }
       if(countf==1){
         cout<<"F";
      }
      else{
         cout<<"F"<<countf;
      }
       if(countg==1){
         cout<<"G";
      }
      else{
         cout<<"G"<<countg;
      }
       if(counth==1){
         cout<<"H";
      }
      else{
         cout<<"H"<<counth;
      }
       if(counti==1){
         cout<<"I";
      }
      else{
         cout<<"I"<<counti;
      }
       if(countj==1){
         cout<<"J";
      }
      else{
         cout<<"J"<<countj;
      }
       if(countk==1){
         cout<<"K";
      }
      else{
         cout<<"K"<<countk;
      }
       if(countl==1){
         cout<<"L";
      }
      else{
         cout<<"L"<<countl;
      }
       if(countm==1){
         cout<<"M";
      }
      else{
         cout<<"M"<<countm;
      }
       if(countn==1){
         cout<<"N";
      }
      else{
         cout<<"N"<<countn;
      }
       if(counto==1){
         cout<<"O";
      }
      else{
         cout<<"O"<<counto;
      }
       if(countp==1){
         cout<<"P";
      }
      else{
         cout<<"P"<<countp;
      }
       if(countq==1){
         cout<<"Q";
      }
      else{
         cout<<"Q"<<countq;
      }
       if(countr==1){
         cout<<"R";
      }
      else{
         cout<<"R"<<countr;
      }
       if(counts==1){
         cout<<"S";
      }
      else{
         cout<<"S"<<counts;
      }
       if(countt==1){
         cout<<"T";
      }
      else{
         cout<<"T"<<countt;
      }
       if(countu==1){
         cout<<"U";
      }
      else{
         cout<<"U"<<countu;
      }
       if(countv==1){
         cout<<"V";
      }
      else{
         cout<<"V"<<countv;
      }
       if(countw==1){
         cout<<"W";
      }
      else{
         cout<<"W"<<countw;
      }
       if(countx==1){
         cout<<"X";
      }
      else{
         cout<<"X"<<countx;
      }
       if(county==1){
         cout<<"Y";
      }
      else{
         cout<<"Y"<<county;
      }
       if(countz==1){
         cout<<"Z";
      }
      else{
         cout<<"Z"<<countz;
      }

    }
   return 0;
}