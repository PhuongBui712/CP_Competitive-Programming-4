#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l,r; cin >> l >> r;
    int s = l + r;
    if(s == 0) cout << "Not a moose";
    else if(l == r) cout << "Even " << s;
    else cout << "Odd " << (l > r ? l * 2 : r * 2);

    return 0;
}