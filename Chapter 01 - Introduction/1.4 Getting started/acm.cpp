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

    int m;
    char p;
    string ans;
    int pen[26] {0};

    fill(pen, pen + 26, 0);
    int timep = 0, res = 0;
    while (cin >> m && m != -1) {
        cin >> p >> ans;
        if(ans == "wrong")
            pen[p - 'A']++;
        else
            if(pen[p - 'A'] != -1) {
                timep += pen[p - 'A'] * 20 + m;
                res++;
                pen[p - 'A'] = -1;
            }
    }

    cout << res << ' ' << timep;

    return 0;
}