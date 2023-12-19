#include <iostream>
#include <string>

void ppp(std::string& s)
{
    size_t dot = s.find('.');
    if (dot != std::string::npos) 
    {
        s.resize(dot);
        s.shrink_to_fit();
    }
}

int main() {
    std::string s = "asdsaf. f. dfg.dfv..";
    ppp(s);
    std::cout << s ;
    return 0;
}