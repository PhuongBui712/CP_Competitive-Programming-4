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

    int n, k; cin >> n >> k;
    int c[2]; string p[2];

    map<string, int> unknown;
    set<string> know;
    for(int i = 0; i < k; i++) {
        cin >> c[0] >> c[1] >> p[0] >> p[1];
        if(p[0] == p[1]) {
            if(unknown.find(p[0]) != unknown.end()) {
                n--;
                unknown.erase(p[0]);
            }
            else if(know.find(p[0]) != know.end()) {
                know.erase(p[0]);
            }
            else n -= 2;
        }
        else {
            for(int j = 0; j < 2; j++) {
                if(know.find(p[j]) != know.end()) continue;
                else if(unknown.find(p[j]) == unknown.end()) {
                    unknown[p[j]] = c[j];
                    n--;
                }
                else if(unknown[p[j]] != c[j]) {
                    n--;
                    unknown.erase(p[j]);
                    know.insert(p[j]);
                }
            }
        }
        // cout << n << ' ';
    }

    int res = know.size();
    if(n == 2 && unknown.size() == 0) res++;
    else if(n == unknown.size()) res += n;
    cout << res;

    return 0;
}