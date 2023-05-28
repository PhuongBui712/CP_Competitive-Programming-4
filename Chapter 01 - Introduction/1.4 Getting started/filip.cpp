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

int reverse(int& x) {
    int res = 0;
    int tmp = x;
    while(tmp) {
        res *= 10;
        res += tmp % 10;
        tmp /= 10;
    }

    return res;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b; cin >> a >> b;
    cout << max(reverse(a), reverse(b));

    return 0;
}