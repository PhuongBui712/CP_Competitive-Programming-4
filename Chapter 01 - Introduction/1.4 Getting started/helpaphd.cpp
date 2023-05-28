#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n; cin.ignore();
    string f;
    while (n-- && getline(cin, f)) {
        if (f == "P=NP") {
            cout << "skipped\n";
            continue;
        }

        int a = 0, b = 0;
        bool turn = 1;
        for (auto& i : f) {
            if (isdigit(i)) {
                if (turn)
                    a = a * 10 + i - '0';
                else
                    b = b * 10 + i - '0';
            } else
                turn = !turn;
        }
        cout << a + b << "\n";
    }

    return 0;
}