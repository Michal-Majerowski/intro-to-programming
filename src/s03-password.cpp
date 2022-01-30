#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc == 0) {
        return  1;
    }
    std::cout << "password: ";    
    auto n = std::string{};
    std::getline(std::cin, n);
    
    while(n != argv[1]) {
        std::cout << "password: ";
        std::getline(std::cin, n);
    }
    std::cout << "dobre\n";
    return 0;
}


