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
    int a, b, c;
    while(t--) {
        cin >> a >> b >> c;
        map<int, int> ladderOrsnake;
        int x, y;
        for(int i = 0; i < b; i++) {
            cin >> x >> y;
            ladderOrsnake[x] = y;
        }
        
        vi position(a, 1);
        bool win = 0;
        for(int i = 0; i < c;) {
            for(int j = 0; j < a; j++, i++) {
                if(i >= c) break;
                cin >> x;
                if(win) continue;
                position[j] += x;
                if(ladderOrsnake.find(position[j]) != ladderOrsnake.end())
                    position[j] = ladderOrsnake[position[j]];

                if(position[j] >= 100) {
                    position[j] = 100;
                    win = 1;
                }
            }
        }

        for(int i = 0; i < a; i++) cout << "Position of player " << i + 1 << " is " << position[i] << ".\n"; 
    }

    return 0;
}