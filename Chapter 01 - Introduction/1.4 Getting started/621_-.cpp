#include <bits/stdc++.h>

using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; string s;
    cin >> n;
    cin.ignore();
    while (n-- && getline(cin, s)) {
        if(s == "1" || s == "78" || s == "4") cout << '+';
        else if(s[s.length() - 1] == '5' && s[s.length() - 2] == '3') cout << '-';
        else if(s[0] == '9' && s[s.length() - 1] == '4') cout << '*';
        else if(s[0] == '1' && s[1] == '9' && s[2] == '0') cout << '?';
        cout << '\n';
    }
    return 0;
}