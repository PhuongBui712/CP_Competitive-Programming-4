#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    
    int res = 0, x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        res += (x < 0);
    }

    cout << res;
    
    return 0;
}