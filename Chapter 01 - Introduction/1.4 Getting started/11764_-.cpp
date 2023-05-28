#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, h = 0, l = 0, af, bf;
    cin >> t;
    int a = t;
    while(t-- && cin >> n) {
        cin >> bf;
        h = 0; l = 0;
        for(int i = 0; i < n - 1; i++) {
            cin >> af;
            if (af > bf) h++;
            else if(af < bf) l++;
            bf = af;
        }

        cout << "Case " << a - t << ": " << h << " " << l << '\n';
    }

    return 0;
}