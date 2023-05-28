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
    vector<string> in(5);
    for(auto& i : in) getline(cin, i);
    
    for(int i = 0; i < n; i++) {
        int start = 4 * i;
        if(in[0][start] == '.') cout << 1;
        else if(in[3][start] == '*') cout << 2;
        else cout << 3;
    }

    cout << '\n';

    return 0;
}