#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    unsigned long long n;
    vector<unsigned long long> v;
    while (cin >> n && n != 0) {
        // cout << n << endl;
        v.push_back(n);
    }
    v.push_back(0);
    reverse(v.begin(), v.end());
    for (unsigned long long x : v) {
        cout << x << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}