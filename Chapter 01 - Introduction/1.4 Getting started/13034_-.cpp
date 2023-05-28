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

    int s, x;
    cin >> s;
    for (int it = 1; it <= s; it++) {
        bool res = 1;
        for (int i = 0; i < 13; i++) {
            cin >> x;
            if (!x) res = 0;
        }

        cout << "Set #" << it << ": " << ((res ? "Yes" : "No")) << '\n';
    }

    return 0;
}