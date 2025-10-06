#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a;
    int b;
    freopen("divide.in", "r", stdin);
    cin >> a >> b;
    fclose(stdin);
    freopen("divide.out", "w", stdout);
    cout << a / b;
    fclose(stdout);
    // system ("pause");
    return 0;
}
