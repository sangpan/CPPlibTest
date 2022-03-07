#if __APPLE__
#include <TargetConditionals.h>
#if TARGET_OS_MAC

#include "library1.h"
#include <iostream>
#import <Cocoa/Cocoa.h>

void library1::function000() {

    std::cout << "fucntion 000 is called .  " << std::endl;

    NSLog(@"===================================================== fucntion 000 is called");
}

#endif
#endif