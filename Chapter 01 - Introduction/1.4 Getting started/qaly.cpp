#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    double q, y;
    double res = 0;
    while(n-- && cin >> q >> y) {
        res += q * y;
    }

    cout << fixed << setprecision(3) << res;

    return 0;
}