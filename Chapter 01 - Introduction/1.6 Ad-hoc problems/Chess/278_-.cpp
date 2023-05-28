#include <bits/stdc++.h>  

using namespace std;


typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
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

    int t; cin >> t;
    while(t--) {
        char c;
        int m, n;
        cin >> c >> m >> n;

        if(c == 'r' || c == 'Q') cout << min(m, n);
        else if(c == 'k') {
            int res;
            if(m % 2 == 0) res = n * (m / 2);
            else if(n % 2 == 0) res = m * (n / 2);
            else res = (m + 1) / 2 * (n + 1) / 2 + m / 2 + n / 2;
            cout << res;
        }
        else {
            cout << (m + (m & 1)) * (n + (n & 1)) / 4;
        }
        cout << endl;
    }

    return 0;
}