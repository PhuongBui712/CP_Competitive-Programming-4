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
        cout << "Case " << it << ": ";

        int r, c;
        cin >> r >> c;

        string row;
        bool f = 1;
        vvi matrix(r);

        cin.ignore();
        for (int i = 0; i < r; i++) {
            getline(cin, row);
            if (!f) continue;

            bool fr = 0;
            for (int j = 0; j < c; j++) {
                matrix[i].push_back(row[j] - '0');
                if (row[j] == '0') {
                    fr = 1;
                }
            }
            if (!fr) {
                f = 0;
                continue;
            }
        }

        if (!f) {
            cout << -1 << '\n';
            continue;
        }

        int res = INF;
        for (int k = 0; k < c; k++) {
            int resmaxcol = 0;
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    if(matrix[i][max(0, k - j)] == 0 || matrix[i][min(c - 1, k + j)] == 0) {
                        resmaxcol += j;
                        break;
                    }
                }
            }

            res = min(res, resmaxcol);
        }
        cout << res << '\n';
    }

    return 0;
}