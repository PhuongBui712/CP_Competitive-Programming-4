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

    int n, t;
    cin >> n >> t;
    vi arr(n);
    for(auto& i : arr) cin >> i;

    if(t == 1) cout << 7;
    else if(t == 2) {
        if(arr[0] > arr[1]) cout << "Bigger";
        else if(arr[0] == arr[1]) cout << "Equal";
        else cout << "Smaller";
    }
    else if(t == 3) {
        sort(arr.begin(), arr.begin() + 3);
        cout << arr[1];
    }
    else if(t == 4) {
        int res = 0;
        for(auto& i : arr) res += i;
        cout << res;
    }
    else if(t == 5) {
        int res = 0;
        for(auto& i : arr) res += ((i % 2 == 0) ? i : 0);
        cout << res;
    }
    else if(t == 6)
        for(auto& i : arr) 
            cout << char('a' + (i % 26));
    else {
        vector<bool> check(n, 0);
        int i = 0;
        while(1) {
            if(i >= n) {
                cout << "Out";
                break;
            }
            
            if(check[i]) {
                cout << "Cyclic";
                break;
            }

            if(i == n - 1) {
                cout << "Done";
                break;
            }

            check[i] = 1;
            i = arr[i];
        }
    }

    return 0;
}