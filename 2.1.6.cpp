#include <iostream>
#include <cstring>

struct Book {
    char title[100];
    int pages;
    float price;
};

void pp(Book& book, bool x) {
    if (book.pages >=1000){
        x=1;
    }
    else{
        x=0;
    }
}

int main() {
    Book 1book;
    //std::strcpy(1book.title, "saadcvsdff");
    //1book.pages = 500;
    //1book.price = 1000.0;

    bool x;
    std::cin >> x;
    
    pp(1book, x);

    std::cout << 1book.price << std::endl;

    return 0;
}