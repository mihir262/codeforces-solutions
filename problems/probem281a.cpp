#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s;
    std::cin >> s;

    if (!s.empty()) {
        s[0] = std::toupper(s[0]);
    }

    std::cout << s << std::endl;

    return 0;
 }

