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

int checkBlackWhite(int r, int c) {
    if ((!(r & 1) && (c & 1)) || ((r & 1) && !(c & 1)))
        return 0;  // black
    else
        return 1;  // white
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int rs, re, cs, ce;
        char ccs, cce;
        cin >> ccs >> rs >> cce >> re;
        cs = ccs - 'A' + 1;
        ce = cce - 'A' + 1;

        if (checkBlackWhite(rs, cs) != checkBlackWhite(re, ce))
            cout << "Impossible";
        else {
            vpii step;
            step.push_back({cs, rs});
            int cnt = 0;
            while(1) {
                if (cs == ce && rs == re) {
                    break;
                } else if (cs + rs == ce + re) {
                    step.push_back({ce, re});
                    cnt++;
                    break;
                } else {
                    int p = (ce + re - cs - rs) / 2;
                    int nc = cs + p;
                    int nr = rs + p;
                    if(!(nc >= 1 && nc <= 8 && nr >= 1 && nr <= 8)) {
                        nc = ce - p;
                        nr = re - p;
                    }
                    cs = nc;
                    rs = nr;
                    cnt++;
                    step.push_back({nc, nr});
                }
            }
            cout << cnt << ' ';
            for (auto& i : step)
                cout << char(i.first - 1 + 'A') << ' ' << i.second << ' ';
        }
        cout << '\n';
    }

    return 0;
}