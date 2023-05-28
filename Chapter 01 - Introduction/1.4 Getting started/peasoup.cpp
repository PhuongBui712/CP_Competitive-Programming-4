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

    int n, k;
    cin >> n;
    string c1 = "pea soup", c2 = "pancakes", res = "Anywhere is fine I guess";
    bool f1 = 0, f2 = 0;

    while(n--) {
        cin >> k;
        string name;
        cin.ignore();
        getline(cin, name);

        string item;
        for(int i = 0; i < k; i++) {
            getline(cin, item);
            if(item == c1) f1 = 1;
            if(item == c2) f2 = 1;
        }

        if(f1 && f2 && res == "Anywhere is fine I guess") res = name;
        else {
            f1 = 0; f2 = 0;
        }
    }

    cout << res << '\n';

    return 0;
}