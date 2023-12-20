#include <iostream>

void cube(int &a) {
    a= a * a * a;
}

int main() {
    int a;
    std::cin >> a;
    cube(a);
    std::cout << a << std::endl;
    return 0;
}
