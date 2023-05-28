#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
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

int findx(bool *app, int start) {
    for(int i = start; i <= 52; i++) {
        if(!app[i]) return i;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cess[3], ce[2];
    bool appear[54];
    while (1) {
        fill(appear, appear + 53, 0);
        for (int i = 0; i < 3; i++) {
            cin >> cess[i];
            appear[cess[i]] = 1;
        }
        for (int i = 0; i < 2; i++) {
            cin >> ce[i];
            appear[ce[i]] = 1;
        }
        if (!cess[0]) break;

        
        sort(ce, ce + 2);
        sort(cess, cess + 3);
        int res = 0;
        if(ce[1] < cess[1]) res = -1;
        else if(ce[1] < cess[2]) {
            if(ce[0] < cess[1]) res = -1;
            else res = findx(appear, cess[1] + 1);
        }
        else {
            if(ce[0] < cess[1]) res = findx(appear, cess[2] + 1);
            else if(ce[0] < cess[2]) res = findx(appear, cess[1] + 1);
            else res = findx(appear, 1);
        }

        cout << res << '\n';
    }

    return 0;
}