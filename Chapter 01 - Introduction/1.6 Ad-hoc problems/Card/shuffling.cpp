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
    string type;
    cin >> n >> type;

    int init = n / 2 + ((n % 2) && (type == "out"));
    int change = init, time = 0;
    do {
        if(type == "out") {
            if(change < init) {
                change *= 2;
            }
            else {
                change = (change - init) * 2 + 1; //4->1, 5->3
            }
        }
        else {
            if(change < init) {
                change = 2 * change + 1;// 0->1, 1->3, 2->5
            }
            else {
                change = (change - init) * 2;//4->0, 5->2
            }
        }
        // cout << change << '\n';
        time++;
    } while(change != init);
    cout << time;

    return 0;
}