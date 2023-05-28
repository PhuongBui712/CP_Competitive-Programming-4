#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvll;
typedef vector<vector<pll> > vvpll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;

ll MOD = 998244353;
double eps = 1e-12;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    ll p, r, f;
    while (t--) {
        cin >> p >> r >> f;
        if (p > f)
            cout << 0 << '\n';
        else {
            int i;
            for(i = 1;;i++) {
                p *= r;
                if(p > f) break;
            }

            cout << i << '\n';
        }
    }

    return 0;
}

// Time complexity: O(t*logr(f/p))
// should not use log function because number error