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
    for (i = n - 1; i > 0; i--) {
        int index_max_element = 0;
        for (int j = 1; j <= i; j++) {
            if (v[j] > v[index_max_element]) {
                index_max_element = j;
            }
        swap(v[i], v[index_max_element]);
        }
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