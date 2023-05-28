#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double x; cin >> x;
    cout << (int)(x * (1000 *(5280.0/4854)) + 0.5);

    return 0;
}