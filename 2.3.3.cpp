#include <iostream>

std::string r(std::string& s, int n) 
{
    std::string a=s;
    for (int i=0; i<n-1; i++)
    {
        s+= a;
    }
    return s;
}

int main() {
    //std::string in = "Cat";
    std::string in;
    std::getline(std::cin, in);
    
    int n=0;
    std::cin >> n;
    std::string a = r(in, n);
    std::cout << a << std::endl;

    return 0;
}