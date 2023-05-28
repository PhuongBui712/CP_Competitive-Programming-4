#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);

    int x, n, p, res = 0;
    cin >> x >> n;
    while(n--) {
        cin >> p;
        res += x - p;
    }

    cout << res + x;

    return 0;
}