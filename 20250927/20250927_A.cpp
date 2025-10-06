#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    cin >> n;
    vector<int> v(n);
    while (i < n) {
        cin >> v[i];
        i++;
    }
    while (j < n-1) {
        k = 0;
        while (k < n-j-1) {
            if (v[k] > v[k+1]) {
                swap(v[k], v[k+1]);
            }
            k++;
        }
        j++;
    }
// Вывод массива, C++ по-другому не умеет)))
    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    // system("pause");
    return 0;
}