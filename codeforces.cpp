void solve(){

int n

cin>>n;

vector<int> arr(n); for(int i=0;i<n;i++) cin>>arr[1];

vector<int> b,c;

sort(arr.begin(), arr.end()); if(arr[0]= arr[n-1]) { cout<<-1<<endl;

return;

}

int p = arr[n-1];

int in-1; while(i>=0 && arr[i]==p){

c.push_back(arr[i]);

i--;

} while(i>=0){

b.push_back(arr[i]);

1--; }

cout<<b.size()k" "<<c.size()<<endl; for(auto e:c) cout<<e<<" ";

for(auto e:b) {
	cout<<e<<" ";
}
  cout<<endl;

}