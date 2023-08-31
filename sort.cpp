  #include<bits/stdc++.h>
  using namespace std;
  int32_t main(){
  int T;
    cin >> T;
    
    while (T--)
    {
        int n, a, q;
        cin >> n >> a >> q;
        
        string s;
    
        
        if (n == a)
        {
            cout << "YES\n";
            continue;
        }
        
        int p = 0;
        int t = a;
        bool c = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+')
            {
                p++;
                t++;
               /* if (t == n)
                    c = true;*/
            }
            else
                t--;
        }
        if (t==a)
            cout << "YES\n";
        else if (p >= n)
            cout << "MAYBE\n";
        else
            cout << "NO\n";
    }
 
    return 0;
}