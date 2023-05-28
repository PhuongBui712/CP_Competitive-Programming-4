#include <bits/stdc++.h>
using namespace std;

bool strcp(string& a, int b) {
    int numa = 0;
    for(int i = 0; i < 4; i++)
        numa = numa * 10 + a[i] - '0';
    return numa >= b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, c;
    string n, b, s;
    cin >> t;
    while (t-- && cin >> n >> s >> b >> c) {
        cout << n << " ";
        if(strcp(s, 2010) || strcp(b, 1991))
            cout << "eligible";
        else if(c >= 41)
            cout << "ineligible";
        else
            cout << "coach petitions";
        cout << '\n';
        cin.ignore();
    }

    return 0;
}