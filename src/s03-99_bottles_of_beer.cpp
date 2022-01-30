#include <iostream>
#include <string>

auto main(int, char* argv[]) -> int {
    int a;
    if (argv[1] == NULL) {
        a = 99;
    } else {
        a = std::stoi(argv[1]);
    }
    int b = a;
    do {
        std::cout << a << " bottles of beer on the wall, " << a << " bottles of beer.\n";
        a--;
        std::cout << "Take one down, pass it around, " << a << " bottles of beer on the wall..\n";
    } while (a > 2);
    if (a == 2) {
        std::cout << a << " bottles of beer on the wall, " << a << " bottles of beer.\n";
        a--;
        std::cout << "Take one down, pass it around, " << a << " bottle of beer on the wall..\n";
    }
    if (a == 1) {
        std::cout << a << " bottle of beer on the wall, " << a << " bottle of beer.\n";
        a--;
        std::cout << "Take one down, pass it around, " << "no more bottles of beer on the wall..\n";
    }
    if (a == 0) {
        std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
        std::cout << "Go to the store and buy some more, " << b << " bottles of beer on the wall...\n";
    }
}
