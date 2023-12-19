#include <iostream>

std::string r1(const std::string& s) 
{
    return s+s;
}
void r2(std::string& s) 
{
    s+= s;
}
void r3(std::string* ps)
{
    *ps+= *ps;
}
std::string* r4(std::string& s) 
{
    std::string* a = new std::string(s + s);
    return a;
}

int main() {
    std::string in = "Cat";
    std::string a = r1(in);
    std::cout << a << std::endl;

    return 0;
}