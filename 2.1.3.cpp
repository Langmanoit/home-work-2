#include <iostream>

int cube(int &a) {
    return a * a * a;
}

int main() {
    int a;
    std::cin >> a;
    int result = cube(a);
    std::cout << result << std::endl;
    return 0;
}