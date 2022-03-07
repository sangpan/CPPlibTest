//
// Created by sangpan on 2021/02/03.
//
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)

#include "library1.h"
#include <iostream>
#include <Windows.h>

void library1::function000() {

    std::cout << "fucntion 000 is called .  " << std::endl;
    OutputDebugString(TEXT("_________________________ DLL fucntion 000 is called !\n"));

}
#endif