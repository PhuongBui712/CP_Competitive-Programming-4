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

    vi a(3);
    for(auto& i : a) cin >> i;
    sort(a.begin(), a.end());
    int d1 = a[1] - a[0], d2 = a[2] - a[1];
    if(d1 == d2) cout << (a[0] - d1 < -100 ? a[0] - d1 : a[2] + d1);
    else if(d1 > d2) cout << a[0] + d2;
    else cout << a[1] + d1;

    return 0;
}