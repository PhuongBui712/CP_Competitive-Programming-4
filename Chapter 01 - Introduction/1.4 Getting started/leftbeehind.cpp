#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    while (cin >> x >> y && !(x == 0 && y == 0)) {
        if (x + y == 13) cout << "Never speak again";
        else if (x > y) cout << "To the convention";
        else if (x < y) cout << "Left beehind";
        else if (x == y) cout << "Undecided";
        cout << ".\n";
    }

    return 0;
}