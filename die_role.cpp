#include<bits/stdc++.h>
#define ll long long
#define sajib ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int32_t main(){
	 sajib
    int a,b;
    cin>>a>>b;
    if(a < b){
        swap(a,b);
    }
    int c = 0;
    for(int i=a; i<=6; i++){
        c++;
    }
    int dot = c/6;
    if(dot == 1){
        cout<<"1/1"<<endl;
    }
    else{
        if(c == 0){
            cout<<"0/1"<<endl;
        }
        else if(c == 1){
            cout<<"1/6"<<endl;
        }
        else if(c == 2){
            cout<<"1/3"<<endl;
        }
        else if(c == 3){
            cout<<"1/2"<<endl;
        }
        else if(c == 4){
            cout<<"2/3"<<endl;
        }
        else if(c == 5){
            cout<<"5/6"<<endl;
        }
    }


	return 0;
}