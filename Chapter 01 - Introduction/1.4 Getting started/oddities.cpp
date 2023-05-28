#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x; cin >> n;
    while(n-- && cin >> x)
        cout << x << (x % 2 ? " is odd" : " is even") << '\n';

    return 0;
}