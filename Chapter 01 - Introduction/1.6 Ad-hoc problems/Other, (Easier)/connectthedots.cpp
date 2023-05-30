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

    vector<string> input;
    string a;

    vpii index(10 + ('z' - 'a' + 1) * 2 + 7, {-1, -1});

    while (getline(cin, a)) {
        input.push_back(a);
        while (getline(cin, a) && a != "") input.push_back(a);

        for (int i = 0; i < input.size(); i++) {
            for (int j = 0; j < input[i].length(); j++) {
                if (input[i][j] == '.')
                    continue;
                else if (isdigit(input[i][j]))
                    index[int(input[i][j] - '0')] = {i, j};
                else if (islower(input[i][j]))
                    index[10 + int(input[i][j] - 'a')] = {i, j};
                else
                    index[10 + int(input[i][j] - 'A' + ('z' - 'a' + 1))] = {i,
                                                                            j};
            }
        }

        for (int i = 1; i < index.size() && index[i] != make_pair(-1, -1); i++) {
            if(index[i] == make_pair(-1, -1)) continue;
            else if (index[i].first != index[i - 1].first) {
                for (int j = min(index[i].first, index[i - 1].first) + 1;
                     j < input.size() &&
                     j < max(index[i].first, index[i - 1].first);
                     j++) {
                        
                        if(input[j][index[i].second] == '.')
                            input[j][index[i].second] = '|';
                        else if(input[j][index[i].second] == '-')
                            input[j][index[i].second] = '+';
                }
            }            
            else {
                for (int j = min(index[i].second, index[i - 1].second) + 1;
                     j < input[0].size() &&
                     j < max(index[i].second, index[i - 1].second);
                     j++) {
                        
                        if(input[index[i].first][j] == '.')
                            input[index[i].first][j] = '-';
                        else if(input[index[i].first][j] == '|')
                            input[index[i].first][j] = '+';
                }
            }
        }

        for (int i = 1; i < index.size() && index[i] != make_pair(-1, -1); i++) {
            if(index[i] == make_pair(-1, -1)) continue;
            else if (index[i].first != index[i - 1].first) {
                for (int j = min(index[i].first, index[i - 1].first) + 1;
                     j < input.size() &&
                     j < max(index[i].first, index[i - 1].first);
                     j++) {
                        
                        if(input[j][index[i].second] == '.')
                            input[j][index[i].second] = '|';
                        else if(input[j][index[i].second] == '-')
                            input[j][index[i].second] = '+';
                }
            }            
            else {
                for (int j = min(index[i].second, index[i - 1].second) + 1;
                     j < input[0].size() &&
                     j < max(index[i].second, index[i - 1].second);
                     j++) {
                        
                        if(input[index[i].first][j] == '.')
                            input[index[i].first][j] = '-';
                        else if(input[index[i].first][j] == '|')
                            input[index[i].first][j] = '+';
                }
            }
        }

        for(auto& r : input) {
            for(auto& c : r) cout << c;
            cout << '\n';
        }
        cout << '\n';

        input.clear();
        fill(index.begin(), index.end(), make_pair(-1, -1));
        fill(index.begin(), index.end(), make_pair(-1, -1));
    }

    return 0;
}