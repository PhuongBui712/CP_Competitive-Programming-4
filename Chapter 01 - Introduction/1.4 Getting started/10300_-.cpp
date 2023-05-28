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
        int f; cin >> f;
        ll s, a, e;
        double res = 0;
        for(int i = 0; i < f; i++) {
            cin >> s >> a >> e;
            res += (1.0 * s / a) * e * a ;
        }

        cout << (int)(res > (int)res ? res + 1 : res) << '\n';
    }


    return 0;
}