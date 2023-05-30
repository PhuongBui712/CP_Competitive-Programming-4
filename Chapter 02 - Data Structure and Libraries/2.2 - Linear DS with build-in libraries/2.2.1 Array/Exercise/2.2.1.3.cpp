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

// 1. Determine if S contain one or more paris of 
bool contain_duplicate(vi& arr) {
    vi tmp_arr(arr);
    sort(tmp_arr.begin(), tmp_arr.end());
    bool dup = false;
    for(int i = 1; i < tmp_arr.size(); i++)
        if(arr[i] == arr[i] - 1) {
            dup=true;
            break;
        }

    return dup;

    // Time complexity: sort(O(nlogn)), loop(o(n)) --> 0(nlogn)
}

// 2. give an integer v, find 2 integers a, b ∈ S such as a + b = v
pii find_v(int v, vi& arr) {
    vi tmp_arr(arr);
    sort(tmp_arr.begin(), tmp_arr.end());

    for(int i = 0; i < tmp_arr.size() - 1; i++) {
        int a = tmp_arr[i];
        int b = *lower_bound(tmp_arr.begin() + i + 1, tmp_arr.end(), v - a);

        if(a + b == v) return {a, b};
    }
    return {-1, -1};

    // Time complexity: O(nlogn)
}

// 3. Follow-up to question 2: What if the given array S is alreadly sorted?
// Similar to question 2 code except sorting step

// 4. Print the integers in S that fall between a range [a, b] (inclusive) in sorted order
void print_number_in_rangeAB(int a, int b, vi& arr) {
    vi tmp_arr;
    for(auto& i : arr)
        if(i >= a && i <= b) tmp_arr.push_back(i);

    sort(tmp_arr.begin(), tmp_arr.end());
    cout << "element fall between [" << a << ',' << b << "]\n";
    for(auto& i : tmp_arr) cout << i << ' ';
}

// 5. Determine the length of longest increasing contiguous sub-array in S
int length_longestIncreasingContiguous_subarray(vi& arr) {
    int res = 0;
    for(int i = 0; i < arr.size();) {
        int j = i + 1;
        while(arr[j] >= arr[j - 1]) j++;

        res = max(res, j - i);
        i = j;
    }

    return res;
}

// 6. Determine the median of S, assume that n is odd
int median(vi& arr) {
    vi tmp_arr(arr);
    return tmp_arr[int(tmp_arr.size() / 2)];
}

// 7. Find the items that appears > n/2 times in s
int appearMoreThanHaftN(vi& arr) {
    // If possible, let use stl::map of c++
    vi tmp_arr(arr);
    sort(tmp_arr.begin(), tmp_arr.end());

    for(int i = 0; i < tmp_arr.size();) {
        int nextValueIndex = lower_bound(tmp_arr.begin() + i, tmp_arr.end(), tmp_arr[i] + 1) - tmp_arr.begin();
        if(nextValueIndex - i > arr.size()/2) return tmp_arr[i];

        i = nextValueIndex;
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi S;
    srand(time(0));
    for(int i = 0; i < 31; i++) S.push_back(rand() % 200 - 100);
    for(auto& i : S) cout << i << ' ';
    cout << '\n';

    // 1.
    cout << "Contain duplicate value: " << (contain_duplicate ? "True" : "False") << '\n';

    // 2.
    int v = rand() % 200 - 100;
    pii res = find_v(20, S);
    cout << "a + b = " << v << " is: " << res.first << ' ' << res.second;

    // 4.
    print_number_in_rangeAB(rand() % 200 - 100, rand() % 200 - 100, S);

    // 5.
    int lolicsa = length_longestIncreasingContiguous_subarray(S);
    cout << "length of longest increasing contiguous sub-array: " << lolicsa;

    // 6.
    cout << "element that appears > n/2: " << appearMoreThanHaftN(S);

    return 0;
}