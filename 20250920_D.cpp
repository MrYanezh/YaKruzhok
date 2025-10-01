#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        cout << count[i];
        if (i != 25) cout << " ";
    }
    system ("pause");
    // Тест для Гита
}