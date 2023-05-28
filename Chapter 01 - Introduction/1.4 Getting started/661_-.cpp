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

    int n, m, c;
    int t = 1;
    while(cin >> n >> m >> c) {
        if(!n && !m && !c) break;
        cout << "Sequence " << t++ << '\n';

        vi power(n);
        for(auto& i : power) cin >> i;

        bool f = 1;
        vector<bool> on(n, 0);
        int now = 0, maxon = 0;
        for(int i = 0; i < m; i++) {
            int x; cin >> x;
            if(on[x - 1]) {
                now -= power[x-1];
                on[x-1] = 0;
            }
            else {
                now += power[x-1];
                if(now > c) f = 0;
                on[x-1] = 1;
                maxon = max(maxon, now);
            }
        }

        if(f) cout << "Fuse was not blown.\nMaximal power consumption was " << maxon << " amperes.";
        else cout << "Fuse was blown.";
        cout << "\n\n";
    }

    return 0;
}