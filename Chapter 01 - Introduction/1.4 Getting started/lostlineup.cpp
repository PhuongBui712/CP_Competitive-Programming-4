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

    int n; cin>> n;
    int a[105];
    fill(a, a + 105, 1);

    for(int i = 2; i <= n; i++) {
        int x; cin >> x;
        a[x + 2] = i;
    }


    for(int i = 1; i <= n; i++) cout << a[i] << ' ';

    return 0;
}