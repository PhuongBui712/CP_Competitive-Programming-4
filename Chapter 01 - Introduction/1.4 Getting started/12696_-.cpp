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
    double l, w, d, we;
    int res = 0;
    while (t--) {
        cin >> l >> w >> d >> we;
        if (((l <= 56 && w <= 45 && d <= 25) || (l + w + d <= 125)) && we <= 7) {
            cout << 1;
            res++;
        } else
            cout << 0;
        cout << '\n';
    }

    cout << res << '\n';

    return 0;
}