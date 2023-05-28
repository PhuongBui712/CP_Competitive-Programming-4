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

    int y;
    cin >> y;
    if (y == 2018)
        cout << "yes";
    else {
        int minmonth = (y - 2019) * 12 + 8;
        int maxmonth = minmonth + 12;
        cout << (maxmonth / 26 - minmonth / 26 ? "yes" : "no");
    }

    return 0;
}