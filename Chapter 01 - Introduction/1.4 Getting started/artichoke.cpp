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

int p, a, b, c, d, n;

double cal(int k) { return p * (sin(a * k + b) + cos(c * k + d) + 2.0); }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> p >> a >> b >> c >> d >> n;
    double res = 0, mi = cal(1);
    double ma = mi;
    for(int i = 1; i <= n; i++) {
        double pk = cal(i);
        if(pk < mi) {
            res = max(res, ma - pk);
            mi = pk;
        }
        
        if(pk > ma) {
            ma = pk;
            mi = pk;
        }
        // cout << ma << ' ' << mi << ' ' << cal(i) << "\n";
    }

    cout << fixed << setprecision(6) << res;

    return 0;
}