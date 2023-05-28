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

    int m, n;
    while(cin >> m >> n) {
        if(!m && !n) break;

        int mi, ma, res;
        mi = min(m, n);
        ma = max(m, n);
        
        if(mi == 1) res = ma;
        else if(mi == 2) res = 4 * (ma / 4) + 2 * min(2, ma % 4);
        else res = (ma * mi + 1) / 2;

        cout << res << " knights may be placed on a " << m << " row " << n << " column board.\n"; 
    }

    return 0;
}