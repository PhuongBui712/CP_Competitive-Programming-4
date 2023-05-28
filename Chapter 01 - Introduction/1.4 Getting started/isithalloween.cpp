#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string date;
    getline(cin, date);
    cout << (date == "OCT 31" or date == "DEC 25" ? "yup" : "nope");

    return 0;
}