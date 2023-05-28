#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, r, e, c; cin >> n;
    while(n-- && cin >> r >> e >> c){
        cout << (r + c < e ? "advertise" : (r + c > e ? "do not advertise" : "does not matter")) << '\n';
    }

    return 0;
}
