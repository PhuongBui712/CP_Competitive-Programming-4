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

int retx(string& in) {
    if (isdigit(in[0])) return in[0] - '0';
    return 10;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    for (int it = 1; it <= t; it++) {
        cout << "Case " << it << ": ";

        vector<string> cards(52);
        for(auto& i : cards) cin >> i;

        int x, y = 0, start = 26;
        for(int i = 0; i < 3; i++) {
            x = retx(cards[start]);
            y += x;
            start -= 1 + 10 - x;
        }

        if(y - 1 > start) cout << cards[25 + y - start];
        else cout << cards[start];
        cout << '\n';

    }

    return 0;
}

// on hand: KH QH JH TH 9H 8H 7H 6H 5H 4H 3H 2H AS KS QS JS TS 9S 8S 7S 6S 5S 4S 3S 2S
// remain: AC KC QC JC TC 9C 8C 7C 6C 5C 4C 3C 2C AD KD QD 

// --> last: AC KC QC JC TC 9C 8C 7C 6C 5C 4C 3C 2C AD KD QD KH QH JH TH 9H 8H 7H 6H 5H 4H 3H 2H AS KS QS JS TS 9S 8S 7S 6S 5S 4S 3S 2S