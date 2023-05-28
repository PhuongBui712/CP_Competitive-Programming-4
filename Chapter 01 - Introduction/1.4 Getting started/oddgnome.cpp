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

    int n, g; cin >> n;
    while(n--) {
        cin >> g;
        int xf, x;
        bool f = 0;
        cin >> xf;
        for(int i = 2; i <= g; ++i) {
            cin >> x;
            if(f) continue;
            if(x - xf != 1) {
                cout << i << '\n';
                f = 1;
            }
            xf = x;
        }
    }

    return 0;
}