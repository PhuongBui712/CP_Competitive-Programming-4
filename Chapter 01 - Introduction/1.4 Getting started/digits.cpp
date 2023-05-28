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

    string x;
    while(getline(cin, x)) {
        if(x == "END") break;
        string xi = x;
        string xi_1;
        bool dot = 0;
        for(auto& j : x)
            if(j == '.') dot = 1;
        
        xi_1 = to_string(xi.length() - dot);
        int i = 1;
        while(xi_1 != xi) {
            xi = xi_1;
            xi_1 = to_string(xi_1.length());
            i++;
        }

        cout << i << '\n';
    }

    return 0;
}