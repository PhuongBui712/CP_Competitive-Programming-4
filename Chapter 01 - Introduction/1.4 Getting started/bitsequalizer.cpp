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

    int c; cin >> c;
    cin.ignore();

    string s, t;
    for(int it = 1; it <= c; it++) {
        cout << "Case " << it << ": ";
        getline(cin, s);
        getline(cin, t);
        
        if(s.length() - t.length()) {
            cout << -1 << '\n';
            continue;
        }

        int dif[2]{0, 0}, que[2]{0, 0};
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '?')
                que[t[i] - '0']++;
            else if(s[i] != t[i])
                dif[t[i] - '0']++;
        }

        if(dif[0] > dif[1] + que[1]) cout << -1;
        else if(dif[0] > dif[1]) cout << que[0] + que[1] + dif[0];
        else cout << que[0] + que[1] + dif[1];
        cout << '\n';
    }

    return 0;
}