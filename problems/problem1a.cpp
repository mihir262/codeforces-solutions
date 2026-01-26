#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

    long long m, n, a;
    cin >> m >> n >> a;

    long long tiles_m = (m + a - 1) / a;
    long long tiles_n = (n + a - 1) / a;

    long long number_of_tiles = tiles_m * tiles_n;

    cout << number_of_tiles << '\n';
    return 0;
}
