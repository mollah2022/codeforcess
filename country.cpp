#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void solve(vector<int>& nums, vector<vector<int>>& ans, int index) {
    if (index == nums.size()) {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++) {
        swap(nums[j], nums[index]);
        solve(nums, ans, index + 1);
        swap(nums[j], nums[index]);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 1; i <= n; i++) {
            arr[i - 1] = i;
        }
        vector<vector<int>> perm;
        solve(arr, perm, 0);

        for (int i = 0; i < perm.size(); i++) {
            bool valid = true;
            for (int j = 0; j < n; j++) {
                if (!is_prime(perm[i][j] - j - 1)) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                for (int j = 0; j < n; j++) {
                    cout << perm[i][j] << " ";
                }
                cout << endl;
                break;
            }
        }
    }

    return 0;
}