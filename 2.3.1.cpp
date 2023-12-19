#include <iostream>
#include <string>

std::string ppp(const std::string& a) {
    if (a.empty()) {
        return "";
    }

    std::string b = a;
    b[0] = std::tolower(b[0]);

    return b;
}

int main() {
    std::string in = "Cat";
    std::string out = ppp(in);

    std::cout << out;
    return 0;
}