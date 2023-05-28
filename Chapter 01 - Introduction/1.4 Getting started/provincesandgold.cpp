#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int g, s, c;
    cin >> g >> s >> c;
    int sum= g * 3 + s * 2 + c;
    if(sum >= 8) cout << "Province or Gold";
    else if (sum >= 5) {
        cout << "Duchy or " << (sum > 5 ? "Gold" : "Silver");
    }
    else if (sum >= 2) {
        cout << "Estate or " << (sum > 2 ? "Silver" : "Copper");
    }
    else
        cout << "Copper";

    return 0;
}