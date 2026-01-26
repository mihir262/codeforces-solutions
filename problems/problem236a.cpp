#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    std::string username;
    std::cin >> username;

    if (username.length()%2 == 0 ) {
        std::cout << "CHAT WITH HER!\n";
    } else {
        std::cout << "IGNORE HIM!\n";
    }

    return 0;
}
