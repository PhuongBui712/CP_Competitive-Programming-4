#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll inf = 1e18;

// Use binary search, time complexity: O(t*logn) --> AC but not best

// ll f(ll n) { return n * (1 + n) / 2; }

// ll solve(ll n) {
//     ll l = 0, r = n;
//     ll m = l + (r - l) / 2;
//     ll res;
//     while (l <= r) {
//         m = l + (r - l) / 2;
//         if (f(m) > n) {
//             r = m - 1;
//         } else if (f(m) < n) {
//             l = m + 1;
//             res = m;
//         } else {
//             res = m;
//             break;
//         }
//     }
//     return res;
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     ll t, n;
//     cin >> t;
//     while (t-- && cin >> n) {
//         cout << solve(n) << '\n';
//     }

//     return 0;
// }

// Use root of quadratic equation:
/*
Sum(1 -> m) = m * (1 + m) / 2 <= n
            = m^2 + m - 2n <= 0
-> delta = b^2 - 4ac = 1 - 8n
-> x = (-b + sqrt(delta)) / 2a = (-1 + sqrt(1 - 8n)) / 2
*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t, n; cin >> t;
    while(t-- && cin >> n) {
        cout << (int)(-1 + sqrt(1 + 8*n)) / 2 << '\n';
    }

    return 0;
}