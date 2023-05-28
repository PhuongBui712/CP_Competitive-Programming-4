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

    int b, n;
    while(cin >> b >> n && b && n) {
        vi r(b);
        for(auto& i : r) cin >> i;

        int d, c, v;
        for(int i = 0; i < n; i++) {
            cin >> d >> c >> v;
            r[d-1] -= v;
            r[c-1] += v;
        }

        bool f = 1;
        for(auto& i : r)
            if(i < 0) {
                f = 0;
                break;
            }

        cout << (f ? 'S' : 'N') << '\n';
    }

    return 0;
}