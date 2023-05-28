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

int cal(string& a) {
    int s = 0;
    for(auto& i : a) {
        if(isalpha(i))
            s += (islower(i) ? i - 'a' : i - 'A') + 1;
    }

    int r=0;
    while(!r || r >= 10) {
        if(r) {
            s = r;
            r = 0;
        }
        while(s) {
            r += s % 10;
            s/=10;
        }
    }

    return r;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin.ignore();
    while(getline(cin, a) && getline(cin, b)) {
        int ca = cal(a), cb =cal(b);
        cout << fixed << setprecision(2) << 100 * (ca > cb ? 1.0*cb / ca : 1.0*ca / cb) << " %\n";
    }

    return 0;
}