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

vector<string> field;
int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m;

void fill(int r, int c, vvi& res) {
    res[r][c] = -1;
    for(int i = 0; i < 8; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if(nr >= 0 && nr < n && nc >= 0 && nc < m && res[nr][nc] != -1) res[nr][nc]++;
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 0;
    while(cin >> n >> m) {
        if(!n && !m) break;
        cin.ignore();

        field.resize(n);
        for(auto& i : field) getline(cin, i);
        
        vvi res(n, vi(m, 0));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(field[i][j] == '*') fill(i, j, res);
            }
        }

        if(t) cout << '\n';
        cout << "Field #" << ++t << ":\n";
        for(auto& i : res) {
            for(auto& j : i)
                if(j == -1) cout << '*';
                else cout << j;
            cout << '\n';
        }
    }

    return 0;
}