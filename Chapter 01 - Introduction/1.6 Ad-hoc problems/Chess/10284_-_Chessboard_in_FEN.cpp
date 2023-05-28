#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<pll>> vvpll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;

ll MOD = 998244353;
double eps = 1e-12;
const int INF = 1e9;

vvi board(8, vi(8, -1));
vector<vector<bool>> mark(8, vector<bool>(8, false));
int res = 64;

char mapInt2Str(int m, int n) { return char(board[m][n] + 'a'); }

void solve(int m, int n) {
    char p = mapInt2Str(m, n);

    if (p == 'p' || p == 'P') {
        int t = (p == 'p' ? 1 : -1);
        if (m + t >= 0 && m + t < 8) {
            if (n + 1 < 8) {
                res -= 1 - mark[m + t][n + 1];
                mark[m + t][n + 1] = 1;
            }
            if (n - 1 >= 0) {
                res -= 1 - mark[m + t][n - 1];
                mark[m + t][n - 1] = 1;
            }
        }
    } else if (p == 'r' || p == 'R') {
        bool hp, hm, vp, vm;
        hp = hm = vp = vm = true;
        for (int i = 1;; i++) {
            if (hp && m + i < 8 && board[m + i][n] == -1) {
                res -= 1 - mark[m + i][n];
                mark[m + i][n] = true;
            } else
                hp = false;
            if (hm && m - i >= 0 && board[m - i][n] == -1) {
                res -= 1 - mark[m - i][n];
                mark[m - i][n] = 1;
            } else
                hm = false;
            if (vp && n + i < 8 && board[m][n + i] == -1) {
                res -= 1 - mark[m][n + i];
                mark[m][n + i] = true;
            } else
                vp = false;
            if (vm && n - i >= 0 && board[m][n - i] == -1) {
                res -= 1 - mark[m][n - i];
                mark[m][n - i] = true;
            } else
                vm = false;

            if ((!hm + !hp + !vm + !vp) == 4) break;
        }
    } else if (p == 'n' || p == 'N') {
        int nr[8] = {-1, -1, 1, 1, -2, -2, 2, 2};
        int nc[8] = {-2, 2, -2, 2, -1, 1, -1, 1};
        for (int i = 0; i < 8; i++) {
            int r = m + nr[i];
            int c = n + nc[i];
            if (r >= 0 && r < 8 && c >= 0 && c < 8) {
                res -= 1 - mark[r][c];
                mark[r][c] = 1;
            }
        }
    } else if (p == 'b' || p == 'B') {
        bool d1, d2, d3, d4;
        d1 = d2 = d3 = d4 = true;
        for (int i = 1;; i++) {
            if (d1 && m - i >= 0 && n - i >= 0 && board[m - i][n - i] == -1) {
                res -= 1 - mark[m - i][n - i];
                mark[m - i][n - i] = 1;
            } else
                d1 = false;

            if (d2 && m - i >= 0 && n + i < 8 && board[m - i][n + i] == -1) {
                res -= 1 - mark[m - i][n + i];
                mark[m - i][n + i] = true;
            } else
                d2 = false;
            if (d3 && m + i < 8 && n - i >= 0 && board[m + i][n - i] == -1) {
                res -= 1 - mark[m + i][n - i];
                mark[m + i][n - i] = 1;
            } else
                d3 = false;

            if (d4 && m + i < 8 && n + i < 8 && board[m + i][n + i] == -1) {
                res -= 1 - mark[m + i][n + i];
                mark[m + i][n + i] = true;
            } else
                d4 = false;

            if (!d1 + !d2 + !d3 + !d4 == 4) break;
        }
    } else if (p == 'q' || p == 'Q') {
        bool di1, di2, di3, di4, di5, di6, di7, di8;
        di1 = di2 = di3 = di4 = di5 = di6 = di7 = di8 = true;
        for (int i = 1;; i++) {
            if (di1 && n - i >= 0 && board[m][n - i] == -1) {
                res -= 1 - mark[m][n - i];
                mark[m][n - i] = 1;
            } else
                di1 = false;

            if (di2 && m - i >= 0 && n - i >= 0 && board[m - i][n - i] == -1) {
                res -= 1 - mark[m - i][n - i];
                mark[m - i][n - i] = 1;
            } else
                di2 = false;

            if (di3 && m - i >= 0 && board[m - i][n] == -1) {
                res -= 1 - mark[m - i][n];
                mark[m - i][n] = 1;
            } else
                di3 = false;

            if (di4 && m - i >= 0 && n + i < 8 && board[m - i][n + i] == -1) {
                res -= 1 - mark[m - i][n + i];
                mark[m - i][n + i] = 1;
            } else
                di4 = false;

            if (di5 && n + i < 8 && board[m][n + i] == -1) {
                res -= 1 - mark[m][n + i];
                mark[m][n + i] = 1;
            } else
                di5 = false;

            if (di6 && m + i < 8 && n + i < 8 && board[m + i][n + i] == -1) {
                res -= 1 - mark[m + i][n + i];
                mark[m + i][n + i] = 1;
            } else
                di6 = false;

            if (di7 && m + i < 8 && board[m + i][n] == -1) {
                res -= 1 - mark[m + i][n];
                mark[m + i][n] = 1;
            } else
                di7 = false;

            if (di8 && m + i < 8 && n - i >= 0 && board[m + i][n - i] == -1) {
                res -= 1 - mark[m + i][n - i];
                mark[m + i][n - i] = 1;
            } else
                di8 = false;

            if ((!di1 + !di2 + !di3 + !di4 + !di5 + !di6 + !di7 + !di8) == 8)
                break;
        }
    } else {
        int nr[8] = {0, -1, -1, -1, 0, 1, 1, 1};
        int nc[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
        for (int i = 0; i < 8; i++) {
            int r = m + nr[i];
            int c = n + nc[i];
            if (r >= 0 && r < 8 && c >= 0 && c < 8) {
                res -= 1 - mark[r][c];
                mark[r][c] = 1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    while (getline(cin, input)) {
        res = 64;
        for (auto& i : board) fill(i.begin(), i.end(), -1);
        for (auto& i : mark) fill(i.begin(), i.end(), false);

        int r = 0, c = 0;
        for (auto& i : input) {
            if (isdigit(i))
                c += int(i - '0');
            else if (isalpha(i)) {
                res--;
                board[r][c] = i - 'a';
                mark[r][c++] = 1;
            } else {
                r++;
                c = 0;
            }
        }
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] != -1) {
                    solve(i, j);
                }
            }
        }
        cout << res << '\n';
    }

    return 0;
}