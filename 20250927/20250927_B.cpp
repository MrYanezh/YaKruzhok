#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    int i = 0;
    cin >> n;
    vector<int> v(n);
    while (i < n) {
        cin >> v[i];
        i++;
    }
    for (i = 1; i < n; i++) {
        int j = i - 1;
        int k = v[i];
        while (j >= 0 && (v[j] > k)) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = k;
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