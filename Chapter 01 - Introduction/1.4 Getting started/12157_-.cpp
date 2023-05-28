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
    for(int it = 1; it <= t; it++) {
        int n; cin >> n;
        int mile = 0, juice = 0;

        for(int i = 0; i < n; i++) {
            int call; cin >> call;
            mile += ((call / 30) + 1) * 10;
            juice += ((call / 60) + 1) * 15;
        }

        cout << "Case " << it << ": ";
        if(mile < juice) cout << "Mile " << mile;
        else if(mile > juice) cout << "Juice " << juice;
        else cout << "Mile Juice " << mile;
        cout << '\n';
    }

    return 0;
}