#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    int l = (int)abs(n - m);
    
    if(m >= n)
        cout << "Dr. Chaz will have " << l << (l > 1 ? " pieces" : " piece") << " of chicken left over!";
    else
        cout << "Dr. Chaz needs " << l << " more " << (l > 1 ? "pieces" : "piece") << " of chicken!";

    return 0;
}