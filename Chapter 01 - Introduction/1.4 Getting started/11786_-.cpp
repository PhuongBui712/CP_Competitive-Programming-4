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

    int n; cin >> n;
    cin.ignore();
    while(n--) {
        string in;
        getline(cin, in);

        int res = 0;
        vi down;
        for(int i = 0; i < in.length(); i++) {
            if(in[i] == '\\') down.push_back(i);
            else if(in[i] == '/' && down.size()) {
                res += i - down[down.size() - 1];
                down.pop_back();
            }
        }

        cout << res << '\n';
    }

    return 0;
}