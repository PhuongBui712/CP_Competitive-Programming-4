#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    cout << (int)((1 << n) + 1) * ((1 << n) + 1);

    return 0;
}