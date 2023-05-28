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

    string in;
    cin >> in;
    int res[2] {0, 0};
    int turn;
    for(auto& i : in) {
        if(isalpha(i)) {
            turn = i - 'A';
        }
        else {
            res[turn] += i - '0';
        }
    }

    cout << (res[0] > res[1] ? 'A' : 'B');

    return 0;
}