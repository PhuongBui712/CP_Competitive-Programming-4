#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b;
    while(cin >> a >> b) {
        cout << abs(a - b) << '\n';
    }
    return 0;
}