#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)

#include <iostream>

#include "../B/library1.h"

#include <sstream>
#include <string.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    library1::function000();


//    sendTest();
    std::cout << "Hello, World! 2" << std::endl;

    return 0;
}

#endif