#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    int l, w, h;
    for(int i = 1; i <= t; i++) {
        cin >> l >> w >> h;
        cout << "Case " << i << ": " << (l <= 20 && w <= 20 && h <= 20 ? "good" : "bad") << '\n';
    }

    return 0;
}