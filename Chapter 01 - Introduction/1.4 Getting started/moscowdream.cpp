#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, n;
    cin >> a >> b >> c >> n;
    cout << (a > 0 && b > 0 && c > 0 && n > 2 && a + b + c >= n ? "YES" : "NO")  << '\n';

    return 0;
}