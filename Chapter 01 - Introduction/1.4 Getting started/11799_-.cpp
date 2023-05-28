#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    int a = t;
    while(t--) {
        cin >> n;
        int res = -1;
        int c;
        for(int i = 0; i < n; i++) {
            cin >> c;
            res = max(res, c);
        }

        cout << "Case " << a - t << ": " << res << '\n';

    }

    return 0;
}