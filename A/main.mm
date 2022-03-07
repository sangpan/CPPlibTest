#if __APPLE__
#include <TargetConditionals.h>
#if TARGET_OS_MAC
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
#endif