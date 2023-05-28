#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, k, p;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n >> k >> p;
        cout << "Case " << i << ": " << ((k + p) % n == 0 ? n : (k + p) % n)
             << '\n';
    }
    return 0;
}