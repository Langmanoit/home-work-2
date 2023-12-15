#include <iostream>

namespace myspace {
    void print(const char* str, int n) {
        for (int i = 0; i < n; i++) {
            std::cout << str << std::endl;
        }
    }
}

int main() {
    myspace::print("Hello world", 10);
    return 0;
}