#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, l, h[1001] = {0};
    cin >> n;
    while (n--)
    {
        cin >> l;
        h[l] += 1;
    }

    int height = *max_element(h, h + 1001);
    int number = 1001 - count(h, h + 1001, 0);

    cout << height << " " << number << endl;
    return 0;
}