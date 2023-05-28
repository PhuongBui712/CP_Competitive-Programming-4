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

int t, a, b, res = 0;
vi cnt1(10, 0), cnt2(10, 0);

void feedback(string guess, string exact) {
    fill(cnt1.begin(), cnt1.end(), 0);
    fill(cnt2.begin(), cnt2.end(), 0);

    int a2 = 0, b2 = 0;
    for(int i = 0; i < guess.length(); i++)
        if(guess[i] == exact[i]) a2++;
        else {
            cnt1[guess[i] - '0']++;
            cnt2[exact[i] - '0']++;
        }
    
    for(int i = 1; i < 10; i++) b2 += min(cnt1[i], cnt2[i]);

    if(a2 == a && b2 == b) res++;
}

void solve(string guess, string exact) {
    if(guess.length() == exact.length()) {
        feedback(guess, exact);
        return;
    }
    
    for(int i = 1; i < 10; i++) {
        string next = exact + char('0' + i);
        solve(guess, next);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while(t--) {
        string guess;
        cin >> guess >> a >> b;
        cin.ignore();

        res = 0;
        solve(guess, "");

        cout << res << endl;
    }

    return 0;
}