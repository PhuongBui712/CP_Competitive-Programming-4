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

    int a[14];
    fill(a, a + 14, 0);

    string in;
    for(int i = 0; i < 5; i++) {
        cin >> in;
        if(isalpha(in[0])) {
            int num;
            switch (in[0]) {
                case 'A':
                    num = 1;
                    break;
                case 'J':
                    num = 11;
                    break;
                case 'Q':
                    num = 12;
                    break;
                default:
                    num = 13;
                    break;
            }

            a[num]++;
        }
        else
            a[in[0] - '0']++;
    }

    int res = 0;
    for(int i = 1; i < 14; i++) res = max(res, a[i]);
    cout << res;

    return 0;
}