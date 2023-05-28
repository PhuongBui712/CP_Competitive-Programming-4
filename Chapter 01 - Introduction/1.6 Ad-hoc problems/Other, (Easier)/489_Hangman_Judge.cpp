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

set<char> characters;
set<char> righta;
set<char> wrong;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    string in;
    while(cin >> t && t != -1) {
        cin.ignore();
        characters.clear();
        righta.clear();
        wrong.clear();
        
        getline(cin, in);
        for(auto& i : in)
            characters.insert(i);
        
        getline(cin, in);
        bool cko = 1;
        int cnt = 0;
        cout << "Round " << t << '\n';
        for(auto& i : in) {
            if(characters.find(i) != characters.end())
                righta.insert(i);
            else if(wrong.find(i) == wrong.end())
                wrong.insert(i);
            
            if(righta.size() == characters.size()) {
                cout << "You win.";
                cko = 0;
                break;
            }
            else if(wrong.size() >= 7) {
                cout << "You lose.";
                cko = 0;
                break;
            }
        }

        if(cko) cout << "You chickened out.";
        cout << '\n';    }

    return 0;
}