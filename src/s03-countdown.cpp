#include <iostream>
#include <string>

auto main(int, char* argv[]) -> int { 
    auto init = std::stoi(argv[1]);
    while (init >= 0) {
        std::cout << init << "...\n";
        init--;
    }
}
