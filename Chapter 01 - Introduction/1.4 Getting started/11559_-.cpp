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

    int n, b, h, w;
    while (cin >> n >> b >> h >> w) {
        int p;
        bool f = 0;
        int res = INF;
        vi room(w);

        for (int k = 0; k < h; k++) {
            cin >> p;
            for (auto& j : room) cin >> j;

            if (p * n > b) continue;
            for (auto& i : room) {
                if (i >= n) {
                    f = 1;
                    res = min(res, p * n);
                }
            }
        }

        if(f) cout << res;
        else cout << "stay home";
        cout << '\n';
    }

    return 0;
}