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

string board[8][8];

void init() {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if((i + j) % 2) board[i][j] = ":::";
            else board[i][j] = "...";
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    init();

    string w, bl;
    getline(cin, w);
    getline(cin, bl);

    string line = "+---+---+---+---+---+---+---+---+";

    if(w.length() > 6) {
        string x = "";
        for(int i = 7; i < w.length(); i++) {
            if(w[i] != ',') {
                x.push_back(w[i]);
                if(i != w.length() - 1) continue;
            }
            if(x.length() == 3) board[8 - int(x[2] - '0')][x[1] - 'a'][1] = x[0]; // row: '8':0, '7':1
            else board[8 - x[1] + '0'][x[0] - 'a'][1] = 'P';

            x = "";
        }
    }
    if(bl.length() > 6) {
        string x = "";
        for(int i = 7; i < bl.length(); i++) {
            if(bl[i] != ',') {
                x.push_back(bl[i]);
                if(i != bl.length() - 1) continue;
            }
            if(x.length() == 3) board[8 - int(x[2] - '0')][x[1] - 'a'][1] = tolower(x[0]);
            else board[8 - x[1] + '0'][x[0] - 'a'][1] = 'p';

            x = "";
        }
    }

    cout << line;
    for(int i = 0; i < 8; i++) {
        cout << "\n|";
        for(int j = 0; j < 8; j++) cout << board[i][j] << "|";
        cout << '\n' << line;
    }

    return 0;
}