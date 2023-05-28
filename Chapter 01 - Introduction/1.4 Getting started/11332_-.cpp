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

    int n;
    while(cin >> n && n) {
        int sum = n, res = 0;
        while(!res || res > 9) {
            if(res) {
                sum = res;
                res = 0;
            }
            while(sum) {
                res += sum % 10;
                sum /= 10;
            }
        }

        cout << res << '\n';
    }

    return 0;
}