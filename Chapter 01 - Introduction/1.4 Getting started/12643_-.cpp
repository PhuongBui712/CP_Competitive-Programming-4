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

int size[21];

int solve(int& n, int& p1, int& p2) {
    for(int i = 1; i < n; i++) {
        int branch = p1 / size[i];
        if(p1 % size[i]) branch++;
        int end = size[i] * branch;
        int start = end - size[i] + 1;
        // cout << end << ' ' << start << '\n';
        // cout << branch << '\n';
        if(p2 <= end && p2 >= start) return i;
    }
    return n;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 1; i <= 20; i++)
        size[i] = pow(2, i);

    int n, i, j;
    while(cin >> n >> i >> j) {
        cout << solve(n, i, j) << '\n';
    }

    return 0;
}