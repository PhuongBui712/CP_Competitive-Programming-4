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

    int a, c;
    while(cin >> a >> c && a && c) {
        vi arr(c);
        for(auto& i : arr) cin >> i;

        int res = a - arr[0];
        for(int i = 1; i < c; i++) {
            res += (arr[i - 1] - arr[i] > 0 ? arr[i - 1] - arr[i] : 0);
        }

        cout << res << '\n';
    }
    return 0;
}