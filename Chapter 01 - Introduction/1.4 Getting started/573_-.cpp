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

    int h, d;
    double u, f;
    while (cin >> h >> u >> d >> f && h) {
        f = u * f / 100;
        double now = 0;
        int res = 1;
        while (1) {
            if(u) {
                now += u;
                u -= f;
            }
            if (now - h >= 0.000001) break;
            now -= d;
            if (now < -0.000001) break;
            res++;

            // cout << now << ' ' << u << ' ' << d << '\n';
        }

        if (now < -0.000001)
            cout << "failure on day ";
        else
            cout << "success on day ";
        cout << res << '\n';
    }

    return 0;
}