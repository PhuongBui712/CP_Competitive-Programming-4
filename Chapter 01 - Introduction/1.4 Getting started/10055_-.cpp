#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long a, b;
    while(cin >> a >> b) {
        cout << (a > b ? a - b : b - a) << '\n';
    }

    return 0;
}