#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int {
    int size;
    if (argc != 0) {
    size = argc;
    }
    std::string* output = new std::string[size];
    
   //w odwrotnej kolejności
    if (std::string(argv[1]) == "-r" || std::string(argv[2]) == "-r") {
        for (int i = 1; i < argc; i++) {         
            output[i] = argv[argc-i];
        }
    } else {
        for (int i = 1; i < argc; i++) {         
            output[i] = argv[i];
        }
    }

   //po jednym na linię
    if (std::string(argv[1]) == "-l" || std::string(argv[2]) == "-l") {
        for (int i = 1; i < (argc - 1); i++) {         
            std::cout << output[i] << " \n";
        }
    } else {
        for (int i = 1; i < (argc - 1); i++) {         
            std::cout << output[i] << " ";
        }
    }

   //nie drukować znaku nowej linii na końcu programu
    if (std::string(argv[1]) == "-n" || std::string(argv[2]) == "-n") {
        std::cout << output[size - 1] << " ";
    } else {
        std::cout << output[size - 1] << "\n";
    }
}
