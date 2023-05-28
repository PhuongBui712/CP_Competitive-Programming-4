#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        n = (((((n * 567) / 9) + 7492) * 235) / 47) - 498;
        int res = (n % 100) / 10;
        cout << (res < 0 ? res * -1 : res) << '\n';
    }

    return 0;
}