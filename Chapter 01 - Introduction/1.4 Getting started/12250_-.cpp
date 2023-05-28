#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string h;
    int t = 0;
    while (getline(cin, h)) {
        if (h == "#") break;
        cout << "Case " << ++t << ": ";
        if (h == "HELLO") cout << "ENGLISH";
        else if (h == "HOLA") cout << "SPANISH";
        else if (h == "HALLO") cout << "GERMAN";
        else if (h == "BONJOUR") cout << "FRENCH";
        else if (h == "CIAO") cout << "ITALIAN";
        else if (h == "ZDRAVSTVUJTE") cout << "RUSSIAN";
        else cout << "UNKNOWN";
        cout << '\n';
    }

    return 0;
}