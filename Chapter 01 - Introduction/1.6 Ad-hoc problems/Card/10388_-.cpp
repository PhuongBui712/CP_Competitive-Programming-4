#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
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

    srand(time(0));

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin.ignore();
        string johnup, johndown, janeup, janedown;
        getline(cin, janedown);
        getline(cin, johndown);

        int john = 0, jane = 0;
        for (int i = 0; i < 1000; i++) {
            if (john >= johndown.size())
                if (johnup.size() == 0)
                    break;
                else {
                    john = 0;
                    reverse(johnup.begin(), johnup.end());
                    johndown = johnup;
                    johnup = "";
                }

            if (jane >= janedown.size())
                if (janeup.size() == 0)
                    break;
                else {
                    jane = 0;
                    reverse(janeup.begin(), janeup.end());
                    janedown = janeup;
                    janeup = "";
                }

            johnup = johndown[john] + johnup;
            janeup = janedown[jane] + janeup;
            if (janedown[jane] == johndown[john]) {
                cout << "Snap! for ";
                if (rand() / 141 % 2) {
                    cout << "John: ";
                    johnup = janeup + johnup;
                    janeup = "";
                    cout << johnup;
                } else {
                    cout << "Jane: ";
                    janeup = johnup + janeup;
                    johnup = "";
                    cout << janeup;
                }
                cout << '\n';
            }
            john++;
            jane++;
        }

        if ((johnup.size() || johndown.size()) && (janeup.size() || janedown.size()))
            cout << "Keeps going and going ...";
        else if (johnup.size() || johndown.size())
            cout << "John wins.";
        else
            cout << "Jane wins.";
        cout << '\n';
    }

    return 0;
}