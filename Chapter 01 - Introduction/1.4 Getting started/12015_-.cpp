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
    for (int it = 1; it <= t; it++) {
        string in;
        vector<string> res;
        int x, r = -1;
        for (int i = 0; i < 10; i++) {
            cin.ignore();
            cin >> in >> x;
            if (x > r) {
                res.clear();
                res.push_back(in);
                r = x;
            } else if (x == r) {
                res.push_back(in);
            }
        }
        cout << "Case #" << it << ":\n";
        for(auto& i : res) cout << i << '\n';
    }

    return 0;
}