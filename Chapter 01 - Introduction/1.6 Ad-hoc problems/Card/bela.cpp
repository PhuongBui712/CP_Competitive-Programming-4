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

    map<char, pii> score;
    score['A'] = {11, 11};
    score['K'] = {4, 4};
    score['Q'] = {3, 3};
    score['J'] = {20, 2};
    score['T'] = {10, 10};
    score['9'] = {14, 0};

    int n, res = 0;
    char b;
    string in;
    cin >> n >> b;
    cin.ignore();

    for(int i = 0; i < 4 * n; i++) {
        getline(cin, in);
        if(score.find(in[0]) != score.end()) {
            res += (in[1] == b ? score[in[0]].first : score[in[0]].second);
        }
    }

    cout << res;

    return 0;
}