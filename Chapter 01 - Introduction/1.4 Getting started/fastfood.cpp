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

    int t; cin >> t;
    while(t--) {
        int n, m;
        vi prize;
        vvi ticket;

        cin >> n >> m;
        for(int i = 0; i < n; i++) {
            int k; cin >> k;
            vi p(k);
            for(auto& j : p) cin >> j;
            ticket.push_back(p);

            int x; cin >> x;
            prize.push_back(x);
        }

        vi ticketsize(m + 1);
        for(int i = 1; i <= m; i++) cin >> ticketsize[i];


        int res = 0;
        for(int i = 0; i < n; i++) {
            int minTicket = INF;
            for(auto& j : ticket[i]) minTicket = min(minTicket, ticketsize[j]);
            res += minTicket * prize[i];
        }

        cout << res << '\n';

    }

    return 0;
}