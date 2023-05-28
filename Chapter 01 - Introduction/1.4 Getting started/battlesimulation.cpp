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

    string in;
    getline(cin, in);

    int r = 0, b = 0, l = 0;
    for (int i = 0; i < in.length();) {
        for (int j = i; j < i + 3 && j < in.length(); j++) {
            if (in[j] == 'R')
                r += (r == 0);
            else if (in[j] == 'B')
                b += (b == 0);
            else
                l += (l == 0);
        }

        if (r && b && l) {
            cout << 'C';
            r = 0, b = 0, l = 0;
            i += 3;
        } else {
            if (in[i] == 'R') {
                cout << 'S';
                r--;
            } else if (in[i] == 'B') {
                cout << 'K';
                b--;
            } else {
                cout << 'H';
                l--;
            }
            i++;
        }
    }

    return 0;
}