#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int af, bf;
        cin >> bf;
        bool s = 1;
        for(int j = 0; j < 4; j++) {
            cin >> af;
            if (af - bf != 1) {
                s = 0;
            }
            bf = af;
        }

        cout << (s ? 'Y' : 'N') << '\n';
    }   

    return 0;
}