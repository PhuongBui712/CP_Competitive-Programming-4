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

int rankStar(int rank) {
    if (rank > 20)
        return 2;
    else if (rank > 15)
        return 3;
    else if (rank > 10)
        return 4;
    else
        return 5;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;

    int rank = 25, streak = 0, star = 0;
    for (auto& i : input) {
        if (i == 'W') {
            streak++;
            if (rank > 5 && rank < 26 && streak >= 3) {
                if (star == rankStar(rank)) {
                    rank--;
                    star = 1;
                } else
                    star++;
            }

            if (star == rankStar(rank)) {
                rank--;
                star = 1;
            } else
                star++;

        } else if(rank > 0 && rank < 21) {
            streak = 0;
            if(star) star--;
            else if(rank < 20) {
                rank++;
                star = rankStar(rank) - 1;
            }
        } else streak=0;

        if (!rank) break;
    }

    if (!rank)
        cout << "Legend";
    else
        cout << rank;

    return 0;
}