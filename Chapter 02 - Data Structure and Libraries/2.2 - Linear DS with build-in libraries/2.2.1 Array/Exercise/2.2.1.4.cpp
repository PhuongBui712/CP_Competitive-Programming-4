#include <bits/stdc++.h>  

using namespace std;


typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvll;
typedef vector<vector<pll> > vvpll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;

ll MOD = 998244353;
double eps = 1e-12;
const int INF = 1e9;

void print_2D_array(vvi& arr) {
    for(auto& i : arr) {
        for(auto& j : i)
            cout << j << '\t';
        cout << '\n';
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    srand(time(0));
    vvi A(5, vi(5));
    for(auto& i : A)
        for(auto& j : i)
            j = rand() % 200 - 100;
    
    cout << "original matrix\n";
    print_2D_array(A);

    // 1. Rotate the 2D array 90 degree (counter) the clockwise
    cout << "\nRotate matrix\n";
    vvi tmp_A(A);
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            tmp_A[i][j] = A[i][tmp_A.size() - j - 1];
    
    print_2D_array(tmp_A);

    // 2. Transpose the 2D array
    cout << "\nTranspose matrix\n";
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            tmp_A[i][j] = A[tmp_A.size() - j - 1][i];
    
    print_2D_array(tmp_A);

    // 3. Mirror the 2D array along the certain x-axis (or y-axis)
    cout << "\nMirror the matrix\n";
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            tmp_A[i][j] = A[tmp_A.size() - j - 1][i];
    
    print_2D_array(tmp_A);

    return 0;
}