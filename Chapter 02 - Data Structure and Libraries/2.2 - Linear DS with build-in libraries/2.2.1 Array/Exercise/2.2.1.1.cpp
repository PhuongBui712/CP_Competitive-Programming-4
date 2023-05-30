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

struct PersonalInformation {
    int age;
    string last_name;
    string first_name;

    bool operator< (const PersonalInformation& other) const {
        if(age < other.age) return true;
        else if(age == other.age) {
            if (last_name > other.last_name) return true;
            else if (last_name == other.last_name) {
                if(first_name < other.first_name) return true;
                return false;
            }
            else return false;
        }
        else return false;
    }
};

bool comparePersonalInformation(const PersonalInformation& a, const PersonalInformation& b) {
    return (a < b);
}

struct Fraction {
    int numerator;
    int denominator;

    bool operator< (const Fraction& other) const {
        double value = numerator * 1.0 / denominator;
        double other_value = other.numerator * 1.0 / other.denominator;

        return other_value - value > 1e-6;
    }
};

bool compareFraction(const Fraction& a, const Fraction& b) {
    return (a < b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 1. sort PersonalInformation by ascending age, descending last name and ascending firstname.
    vector<PersonalInformation> persons = {
        {20, "Bui", "Phuong"},
        {20, "Tran", "Trung"},
        {20, "Tran", "Thinh"},
        {20, "Dinh", "Khang"}
    };
    
    sort(persons.begin(), persons.end(), comparePersonalInformation);
    
    cout << "Age\tLastname\tFirstname\n";
    for(auto& i : persons)
        cout << i.age << '\t' << i.last_name << "\t\t" << i.first_name << '\n';

    // 2. sort fraction in asceding order.
    // initialize the vector of fractions
    vector<Fraction> fractions;
    srand(time(0));
    cout << "original: ";
    for(int i = 0; i < 10; i++) {
        fractions.push_back({rand() % 100 + 1, rand() % 100 + 1});
        cout << fractions[i].numerator << '\\' << fractions[i].denominator << ", ";
    }

    sort(fractions.begin(), fractions.end(), compareFraction);
    cout << "\nAfter sorting: ";
    for(auto& i : fractions)
        cout << i.numerator << '\\' << i.denominator << ", ";

    return 0;
}