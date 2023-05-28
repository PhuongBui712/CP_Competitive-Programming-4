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

    map<string, map<string, string>> tran;
    string x = "+x", xm = "-x", z = "+z", zm = "-z", y = "+y", ym = "-y";
    tran[x][z] = z;
    tran[x][zm] = zm;
    tran[x][y] = y;
    tran[x][ym] = ym;
    tran[xm][z] = zm;
    tran[xm][zm] = z;
    tran[xm][y] = ym;
    tran[xm][ym] = y;
    tran[z][zm] = x;
    tran[z][z] = xm;
    tran[z][y] = z;
    tran[z][ym] = z;
    tran[zm][z] = x;
    tran[zm][zm] = xm;
    tran[zm][y] = zm;
    tran[zm][ym] = zm;
    tran[y][z] = y;
    tran[y][zm] = y;
    tran[y][y] = xm;
    tran[y][ym] = x;
    tran[ym][z] = ym;
    tran[ym][zm] = ym;
    tran[ym][y] = x;
    tran[ym][ym] = xm;

    int l;
    while(cin >> l && l) {
        string d;
        cin.ignore();

        string now = "+x";
        for(int i = 0; i < l - 1; i++) {
            cin >> d;
            if(d == "No") continue;
            now = tran[now][d];
        }
        cout << now << '\n';
    }

    return 0;
}