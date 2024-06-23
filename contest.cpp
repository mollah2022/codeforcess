//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define FAST() ios_base::sync_with_stdio(0); cin.tie(0);
#define tst  int t; cin >> t; while(t--)
#define yes  cout << "YES\n";
#define no   cout << "NO\n";


bool check_dialog_validity(const string& dialog) {
    int question_count = 0;

    for (char c : dialog) {
        if (c == 'Q') {
            question_count++;
        } else if (c == 'A') {
            if (question_count > 0) {
                question_count--;
            }
        }
    }

    return question_count == 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string dialog;
        cin >> dialog;
        if (check_dialog_validity(dialog)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
