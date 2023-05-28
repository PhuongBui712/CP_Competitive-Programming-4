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

vector<string> bl, w;
map<char, int> cv;

void init() {
    cv['K'] = 0;
    cv['Q'] = 1;
    cv['R'] = 2;
    cv['B'] = 3;
    cv['N'] = 4;
}

// compare for each type: 1-white, 2-black
bool cmp1(string& c1, string& c2) {
    if(c1.length() - c2.length()) return c1.length() > c2.length();
    else if(c1.length() == 3) {
        if(c1[0] != c2[0]) return cv[c1[0]] < cv[c2[0]];
        else if(c1[2] != c2[2]) return c1[2] < c2[2];
        return c1[1] < c2[1];
    }
    else {
        if(c1[1] != c2[1]) return c1[1] < c2[1];
        return c1[0] < c2[0];
    }
}
bool cmp2(string& c1, string& c2) {
    if(c1.length() - c2.length()) return c1.length() > c2.length();
    else if(c1.length() == 3) {
        if(c1[0] != c2[0]) return cv[c1[0]] < cv[c2[0]];
        else if(c1[2] != c2[2]) return c1[2] > c2[2];
        return c1[1] < c2[1];
    }
    else {
        if(c1[1] != c2[1]) return c1[1] > c2[1];
        return c1[0] < c2[0];
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    init();

    string board[17];
    for(int i = 0; i < 17; i++) getline(cin, board[i]);

    // loop for white
    int r = 0;
    for(int i = 16; i >= 0; i--) {
        if(board[i][0] == '+') {
            r++;
            continue;
        }
        char c = 'a' - 1;
        for(auto& j : board[i]) {
            if(j == '|') c++;
            else if(isupper(j)) {
                string x;
                if(j != 'P') x.push_back(toupper(j));
                x.push_back(c);
                x += to_string(r);

                w.push_back(x);
            }
        }
    }

    // loop for black
    r = 9;
    for(int i = 0; i < 17; i++) {
        if(board[i][0] == '+') {
            r--;
            continue;
        }
        char c = 'a' - 1;
        for(auto& j : board[i]) {
            if(j == '|') c++;
            else if(islower(j)) {
                string x;
                if(j != 'p') x.push_back(toupper(j));
                x.push_back(c);
                x += to_string(r);
                
                bl.push_back(x);
            }
        }
    }

    
    sort(bl.begin(), bl.end(), cmp2);
    sort(w.begin(), w.end(), cmp1);

    cout << "White: ";
    for(int i = 0; i < w.size(); i++) {
        if(i) cout << ',';
        cout << w[i]; 
    }
    cout << "\nBlack: ";
    for(int i = 0; i < bl.size(); i++) {
        if(i) cout << ',';
        cout << bl[i];
    }
    return 0;
}