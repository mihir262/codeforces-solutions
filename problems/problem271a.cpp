#include <bits/stdc++.h>
using namespace std;

bool distinctDigits(int x) {
    set<int> digits;
    while (x > 0) {
        digits.insert(x % 10);
        x /= 10;
    }
    return digits.size() == 4;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y;
    cin >> y;

    for (int year = y + 1; ; year++) {
        if (distinctDigits(year)) {
            cout << year << "\n";
            break;
        }
    }

    return 0;
}
