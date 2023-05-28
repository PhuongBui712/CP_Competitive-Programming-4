#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double x, y; cin >> x >> y;
    if(!x && y == 1) cout << "ALL GOOD";
    else if(x && y == 1) cout << "IMPOSSIBLE";
    else cout << fixed << setprecision(6) << x / (1 - y);

    return 0;
}