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

    int n, t = 1;
    while(cin >> n) {
        vector<string> name;
        map<string, pii> p; // <name, <spend, receive>>
        cin.ignore();
        for(int i = 0; i < n; i++) {
            string s; cin >> s;
            name.push_back(s);
            p[s] = make_pair(0, 0);
        }

        for(int i = 0; i < n; i++) {
            cin.ignore();
            string s; cin >> s;
            int spend, f; cin >> spend >> f;
            if(!f) continue;

            p[s].first = spend - (spend % f);
            for(int j = 0; j < f; j++) {
                string fm; cin >> fm;
                p[fm].second += spend / f;
            }
        }

        if(t++ > 1) cout << '\n';
        for(auto& i : name)
            cout << i << ' ' << p[i].second - p[i].first << '\n';
    }

    return 0;
}