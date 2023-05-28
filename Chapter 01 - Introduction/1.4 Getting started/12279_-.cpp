#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    int n, a, res = 0;
    while(++t && cin >> n && n) {
        res = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a > 0) res++;
            else res--;
        }

        cout << "Case " << t << ": " << res << '\n';
    }

    return 0;
}