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

set<int> kingMove(int init) {
    set<int> res;
    int up, down, left, right;
    up = init - 8;
    down = init + 8;
    left = init - 1;
    right = init + 1;

    if(up > 0) res.insert(up);
    if(left >= init / 8 * 8) res.insert(left);
    if(right <= init / 8 * 8 + 7) res.insert(right);
    if(down <= 63) res.insert(down);

    return res;
}

set<int> queenMove(int init, int k) {
    set<int> res;
    for(int i = 1;; i++) {
        int newP = init - i * 8;
        if(newP > 0 && newP != k) res.insert(newP);
        else break;
    }
    for(int i = 1;; i++) {
        int newP = init + i * 8;
        if(newP <= 63 && newP != k) res.insert(newP);
        else break;
    }
    int endrow = init / 8 * 8 + 7;
    for(int i = 1;; i++) {
        int newP = init + i;
        if(newP <= endrow && newP != k) res.insert(newP);
        else break;
    }
    int startrow = init / 8 * 8;
    for(int i = 1;; i++) {
        int newP = init - i;
        if(newP >= startrow && newP != k) res.insert(newP);
        else break;
    }

    return res;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, q, nq;
    while(cin >> k >> q >> nq) {
        if(k == q) cout << "Illegal state";
        else {
            set<int> qm = queenMove(q, k);
            if(qm.find(nq) == qm.end()) cout << "Illegal move";
            else {
                set<int> km = kingMove(k);
                if(km.find(nq) != km.end()) cout << "Move not allowed";
                else {
                    bool stop = 1;
                    set<int> nqm = queenMove(nq, k);
                    for(set<int>::iterator it = km.begin(); it != km.end(); it++)
                        if(nqm.find(*it) == nqm.end()) {
                            stop = 0;
                            break;
                        }

                    cout << (stop ? "Stop" : "Continue");
                }
            }
        }

        cout << '\n';
    }

    return 0;
}