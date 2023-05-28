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

    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        int sum = 0, index = 1, maxc, lastest; cin >> maxc;
        sum += maxc;
        for(int x, i = 0; i < n - 1; i++) {
            cin >> x;
            sum += x;
            if(x == maxc) {
                lastest = maxc;
                maxc = -1;
            }
            else if(maxc != -1 && maxc < x) {
                maxc = x;
                index = i + 2;
            }
            else if(maxc == -1 && lastest < x) {
                maxc = x;
                index = i + 2;
            }
        }

        if(maxc == -1) cout << "no winner\n";
        else {
            // cout << sum << ' ' << maxc << ' ' << sum / maxc << ' ';
            if(sum / maxc < 2) cout << "majority winner ";
            else cout << "minority winner ";
            cout << index << '\n';
        }
    }

    return 0;
}